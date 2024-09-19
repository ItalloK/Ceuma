<?php

    class Cliente{
        public $nome;
        public $telefone;
        public $endereco;

        public function getNome(){
            return $this->nome;
        }
        public function setNome($nome){
            $this->nome = $nome;
        }
        public function getEndereco(){
            return $this->endereco;
        }
        public function setEndereco($endereco){
            $this->endereco = $endereco;
        }
        public function getTelefone(){
            return $this->telefone;
        }
        public function setTelefone($telefone){
            $this->telefone = $telefone;
        }

    }

    class PessoaFisica extends Cliente{
        public $cpf;
        
        public function getCpf(){
            return $this->cpf;
        }
        public function setCpf($cpf){
            $this->cpf = $cpf;
        }
    }

    class PessoaJuridica extends Cliente{
        public $cnpj;

        public function getCnpj(){
            return $this->cnpj;
        }
        public function setCpnj($cnpj){
            $this->cnpj = $cnpj;
        }
    }


    $cliente = new Cliente();
    $cliente->setNome("Italo Gabriel");
    $cliente->setEndereco("Rua X, Calhau, São Luis - MA");
    $cliente->setTelefone("(98)9 9999-9999");
    echo $cliente->getNome() . "</br>";
    echo $cliente->getEndereco() . "</br>";
    echo $cliente->getTelefone() . "</br>";

    echo "<hr>";

    $pessoaFisica = new PessoaFisica();
    $pessoaFisica->setNome("Italo Gabriel");
    $pessoaFisica->setCpf("123.456.789-12");
    echo $pessoaFisica->getNome() . "</br>"; 
    echo $pessoaFisica->getCpf() . "</br>";

    echo "<hr>";

    $pessoaJuridica = new PessoaJuridica();
    $pessoaJuridica->setNome("Empresa do Italo");
    $pessoaJuridica->setCpnj("12.345.678/0001-34");
    echo $pessoaJuridica->getNome() . "</br>";
    echo $pessoaJuridica->getCnpj() . "</br>";


?>