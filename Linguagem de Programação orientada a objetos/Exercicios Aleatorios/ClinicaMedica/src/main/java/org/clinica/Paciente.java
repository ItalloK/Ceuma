package org.clinica;


import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Paciente {
    private String nome;
    private String cpf;

    public Paciente(String nome, String  cpf){
        this.nome = nome;
        this.cpf = cpf;
    }

}
