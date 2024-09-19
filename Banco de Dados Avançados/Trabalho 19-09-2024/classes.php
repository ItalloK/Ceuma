<?php 
class Departamento {
    public $NumDepartamento;
    public $fkCpf;
    public $NomeDepartamento;
    public $DataInicioGerente;
    public $fkidLocalDepartamento;

    public function getNumDepartamento() {
        return $this->NumDepartamento;
    }

    public function setNumDepartamento($NumDepartamento) {
        $this->NumDepartamento = $NumDepartamento;
    }

    public function getFkCpf() {
        return $this->fkCpf;
    }

    public function setFkCpf($fkCpf) {
        $this->fkCpf = $fkCpf;
    }

    public function getNomeDepartamento() {
        return $this->NomeDepartamento;
    }

    public function setNomeDepartamento($NomeDepartamento) {
        $this->NomeDepartamento = $NomeDepartamento;
    }

    public function getDataInicioGerente() {
        return $this->DataInicioGerente;
    }

    public function setDataInicioGerente($DataInicioGerente) {
        $this->DataInicioGerente = $DataInicioGerente;
    }

    public function getFkidLocalDepartamento() {
        return $this->fkidLocalDepartamento;
    }

    public function setFkidLocalDepartamento($fkidLocalDepartamento) {
        $this->fkidLocalDepartamento = $fkidLocalDepartamento;
    }
}

class Dependente {
    public $iddependente;
    public $Nome;
    public $Sexo;
    public $Datanasc;
    public $Parentesco;
    public $fkCpf;

    public function getIddependente() {
        return $this->iddependente;
    }

    public function setIddependente($iddependente) {
        $this->iddependente = $iddependente;
    }

    public function getNome() {
        return $this->Nome;
    }

    public function setNome($Nome) {
        $this->Nome = $Nome;
    }

    public function getSexo() {
        return $this->Sexo;
    }

    public function setSexo($Sexo) {
        $this->Sexo = $Sexo;
    }

    public function getDatanasc() {
        return $this->Datanasc;
    }

    public function setDatanasc($Datanasc) {
        $this->Datanasc = $Datanasc;
    }

    public function getParentesco() {
        return $this->Parentesco;
    }

    public function setParentesco($Parentesco) {
        $this->Parentesco = $Parentesco;
    }

    public function getFkCpf() {
        return $this->fkCpf;
    }

    public function setFkCpf($fkCpf) {
        $this->fkCpf = $fkCpf;
    }
}

class Funcionario {
    public $Cpf;
    public $Nome;
    public $DataNascimento;
    public $Endereco;
    public $Sexo;
    public $Salario;
    public $Email;
    public $Senha;

    public function getCpf() {
        return $this->Cpf;
    }

    public function setCpf($Cpf) {
        $this->Cpf = $Cpf;
    }

    public function getNome() {
        return $this->Nome;
    }

    public function setNome($Nome) {
        $this->Nome = $Nome;
    }

    public function getDataNascimento() {
        return $this->DataNascimento;
    }

    public function setDataNascimento($DataNascimento) {
        $this->DataNascimento = $DataNascimento;
    }

    public function getEndereco() {
        return $this->Endereco;
    }

    public function setEndereco($Endereco) {
        $this->Endereco = $Endereco;
    }

    public function getSexo() {
        return $this->Sexo;
    }

    public function setSexo($Sexo) {
        $this->Sexo = $Sexo;
    }

    public function getSalario() {
        return $this->Salario;
    }

    public function setSalario($Salario) {
        $this->Salario = $Salario;
    }

    public function getEmail() {
        return $this->Email;
    }

    public function setEmail($Email) {
        $this->Email = $Email;
    }

    public function getSenha() {
        return $this->Senha;
    }

    public function setSenha($Senha) {
        $this->Senha = $Senha;
    }
}

class LocalDepartamento {
    public $idLocalDepartamento;
    public $Nome;

    public function getIdLocalDepartamento() {
        return $this->idLocalDepartamento;
    }

    public function setIdLocalDepartamento($idLocalDepartamento) {
        $this->idLocalDepartamento = $idLocalDepartamento;
    }

    public function getNome() {
        return $this->Nome;
    }

    public function setNome($Nome) {
        $this->Nome = $Nome;
    }
}

class Projeto {
    public $idProjeto;
    public $Nome;
    public $Local;
    public $fkNumDepartamento;

    public function getIdProjeto() {
        return $this->idProjeto;
    }

    public function setIdProjeto($idProjeto) {
        $this->idProjeto = $idProjeto;
    }

    public function getNome() {
        return $this->Nome;
    }

    public function setNome($Nome) {
        $this->Nome = $Nome;
    }

    public function getLocal() {
        return $this->Local;
    }

    public function setLocal($Local) {
        $this->Local = $Local;
    }

    public function getFkNumDepartamento() {
        return $this->fkNumDepartamento;
    }

    public function setFkNumDepartamento($fkNumDepartamento) {
        $this->fkNumDepartamento = $fkNumDepartamento;
    }
}

class TrabalhaEm {
    public $idTrabalhaEm;
    public $fkCpf;
    public $fkIdProjeto;
    public $Horas;

    public function getIdTrabalhaEm() {
        return $this->idTrabalhaEm;
    }

    public function setIdTrabalhaEm($idTrabalhaEm) {
        $this->idTrabalhaEm = $idTrabalhaEm;
    }

    public function getFkCpf() {
        return $this->fkCpf;
    }

    public function setFkCpf($fkCpf) {
        $this->fkCpf = $fkCpf;
    }

    public function getFkIdProjeto() {
        return $this->fkIdProjeto;
    }

    public function setFkIdProjeto($fkIdProjeto) {
        $this->fkIdProjeto = $fkIdProjeto;
    }

    public function getHoras() {
        return $this->Horas;
    }

    public function setHoras($Horas) {
        $this->Horas = $Horas;
    }
}
    $departamento = new Departamento();
    $departamento->setNumDepartamento(1);
    $departamento->setFkCpf('123456789');
    $departamento->setNomeDepartamento('Recursos Humanos');
    $departamento->setDataInicioGerente('2024-01-01');
    $departamento->setFkidLocalDepartamento(1);

    $dependente = new Dependente();
    $dependente->setIddependente(1);
    $dependente->setNome('João Silva');
    $dependente->setSexo('M');
    $dependente->setDatanasc('2010-05-15');
    $dependente->setParentesco('Filho');
    $dependente->setFkCpf('987654321');

    $funcionario = new Funcionario();
    $funcionario->setCpf('123456789');
    $funcionario->setNome('Maria Santos');
    $funcionario->setDataNascimento('1990-08-20');
    $funcionario->setEndereco('Rua A, 123');
    $funcionario->setSexo('F');
    $funcionario->setSalario(3500.50);
    $funcionario->setEmail('maria.santos@example.com');
    $funcionario->setSenha('senha123');

    $localDepartamento = new LocalDepartamento();
    $localDepartamento->setIdLocalDepartamento(1);
    $localDepartamento->setNome('Edifício Central');

    $projeto = new Projeto();
    $projeto->setIdProjeto(1);
    $projeto->setNome('Projeto Alpha');
    $projeto->setLocal('Laboratório');
    $projeto->setFkNumDepartamento(1);

    $trabalhaEm = new TrabalhaEm();
    $trabalhaEm->setIdTrabalhaEm(1);
    $trabalhaEm->setFkCpf('123456789');
    $trabalhaEm->setFkIdProjeto(1);
    $trabalhaEm->setHoras(40);


?>
