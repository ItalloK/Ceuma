package org.clinica;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Paciente {
    private String nome;
    private String cpf;

    public Paciente(String nome, String cpf){
        this.nome = nome;
        this.cpf = cpf;
    }

    public void setNome(String nome){
        if(nome.length() < 3){
            throw new RuntimeException("ERRO, O NOME NÃO PODE SER MENOR QUE 3");
        }
        this.nome = nome;
    }

    public void setCpf(String cpf){
        if(cpf.length() < 11){
            throw new RuntimeException("ERRO, O CPF CONTEM "+cpf.length()+" DIGITOS E DEVE TER 11.");
        }
        this.cpf = cpf;
    }


}
