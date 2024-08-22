-- MySQL Script generated by MySQL Workbench
-- Thu May 30 22:40:19 2024
-- Model: New Model    Version: 1.0
-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema Oficina_Ruddy
-- -----------------------------------------------------
-- Situação Problema:
-- 
-- 1.	Com a missão de criar um Diagrama de Entidade-Relacionamentos para a oficina mecânica do Sr. Ruddy, você precisará rever os requisitos que foram levantados que foram os seguintes:
-- •	Cadastrar os clientes, seus carros e as peças (de alto giro). 
-- •	Cadastrar os funcionários, e, a cada serviço, verificar quem o executou, o que usou e quanto tempo levou. 
-- •	Não há agendamentos prévios, e o atendimento é feito por ordem de chegada, mas há uma lista de clientes VIP que possuem prioridade no atendimento.
-- 
-- Para a criação do Diagrama de Entidade-Relacionamentos, foram ainda levantados mais alguns requisitos, que são: classificar as peças por seus tipos e criar um controle da ordem de serviço do conserto do automóvel.
-- •	Quais são as novas tabelas que irão surgir? As tabelas Tipo de Peça e Ordem de Serviço; 
-- •	Como ter certeza de que os relacionamentos e cardinalidades propostos estão corretos? Deveremos criar o modelo e validar o esquema do modelo relacional com o cliente.
-- 

-- -----------------------------------------------------
-- Schema Oficina_Ruddy
--
-- Situação Problema:
-- 
-- 1.	Com a missão de criar um Diagrama de Entidade-Relacionamentos para a oficina mecânica do Sr. Ruddy, você precisará rever os requisitos que foram levantados que foram os seguintes:
-- •	Cadastrar os clientes, seus carros e as peças (de alto giro). 
-- •	Cadastrar os funcionários, e, a cada serviço, verificar quem o executou, o que usou e quanto tempo levou. 
-- •	Não há agendamentos prévios, e o atendimento é feito por ordem de chegada, mas há uma lista de clientes VIP que possuem prioridade no atendimento.
-- 
-- Para a criação do Diagrama de Entidade-Relacionamentos, foram ainda levantados mais alguns requisitos, que são: classificar as peças por seus tipos e criar um controle da ordem de serviço do conserto do automóvel.
-- •	Quais são as novas tabelas que irão surgir? As tabelas Tipo de Peça e Ordem de Serviço; 
-- •	Como ter certeza de que os relacionamentos e cardinalidades propostos estão corretos? Deveremos criar o modelo e validar o esquema do modelo relacional com o cliente.
-- 
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `Oficina_Ruddy` DEFAULT CHARACTER SET utf8 COLLATE utf8_bin ;
USE `Oficina_Ruddy` ;

-- -----------------------------------------------------
-- Table `Oficina_Ruddy`.`Clientes`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `Oficina_Ruddy`.`Clientes` (
  `idClientes` INT NOT NULL,
  `NomeCliente` VARCHAR(45) NULL,
  `TelCliente` VARCHAR(45) NULL,
  `ClienteVIP` TINYINT NULL DEFAULT 0 COMMENT '0 = Cliente NÃO VIP\n1 = Cliente VIP\n',
  PRIMARY KEY (`idClientes`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Oficina_Ruddy`.`Carros`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `Oficina_Ruddy`.`Carros` (
  `idCarros` INT NOT NULL,
  `ModeloCarro` VARCHAR(45) NULL,
  `PlacaCarro` VARCHAR(45) NULL,
  `Clientes_idClientes` INT NOT NULL,
  PRIMARY KEY (`idCarros`),
  INDEX `fk_Carros_Clientes_idx` (`Clientes_idClientes` ASC) VISIBLE,
  CONSTRAINT `fk_Carros_Clientes`
    FOREIGN KEY (`Clientes_idClientes`)
    REFERENCES `Oficina_Ruddy`.`Clientes` (`idClientes`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Oficina_Ruddy`.`Funcionarios`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `Oficina_Ruddy`.`Funcionarios` (
  `idFuncionarios` INT NOT NULL,
  `NomeFuncionario` VARCHAR(45) NULL,
  `TelefoneFuncionario` VARCHAR(20) NULL,
  PRIMARY KEY (`idFuncionarios`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Oficina_Ruddy`.`Pecas`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `Oficina_Ruddy`.`Pecas` (
  `idPecas` INT NOT NULL,
  `NomePeca` VARCHAR(45) NULL,
  `TipoPeca` VARCHAR(45) NULL,
  PRIMARY KEY (`idPecas`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Oficina_Ruddy`.`Servicos`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `Oficina_Ruddy`.`Servicos` (
  `idServicos` INT NOT NULL,
  `TipoDeServico` LONGTEXT NULL,
  `TempoDoServico` VARCHAR(45) NULL,
  `ValorPeca` FLOAT NULL,
  `Funcionarios_idFuncionarios` INT NOT NULL,
  `Carros_idCarros` INT NOT NULL,
  `Pecas_idPecas` INT NOT NULL,
  PRIMARY KEY (`idServicos`),
  INDEX `fk_Servicos_Funcionarios1_idx` (`Funcionarios_idFuncionarios` ASC) VISIBLE,
  INDEX `fk_Servicos_Carros1_idx` (`Carros_idCarros` ASC) VISIBLE,
  INDEX `fk_Servicos_Pecas1_idx` (`Pecas_idPecas` ASC) VISIBLE,
  CONSTRAINT `fk_Servicos_Funcionarios1`
    FOREIGN KEY (`Funcionarios_idFuncionarios`)
    REFERENCES `Oficina_Ruddy`.`Funcionarios` (`idFuncionarios`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Servicos_Carros1`
    FOREIGN KEY (`Carros_idCarros`)
    REFERENCES `Oficina_Ruddy`.`Carros` (`idCarros`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Servicos_Pecas1`
    FOREIGN KEY (`Pecas_idPecas`)
    REFERENCES `Oficina_Ruddy`.`Pecas` (`idPecas`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Oficina_Ruddy`.`OrdemDeServico`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `Oficina_Ruddy`.`OrdemDeServico` (
  `idOrdemDeServico` INT NOT NULL,
  `Data` DATETIME NULL,
  `Servicos_idServicos` INT NOT NULL,
  PRIMARY KEY (`idOrdemDeServico`),
  INDEX `fk_OrdemDeServico_Servicos1_idx` (`Servicos_idServicos` ASC) VISIBLE,
  CONSTRAINT `fk_OrdemDeServico_Servicos1`
    FOREIGN KEY (`Servicos_idServicos`)
    REFERENCES `Oficina_Ruddy`.`Servicos` (`idServicos`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
