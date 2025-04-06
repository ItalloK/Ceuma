package org.Entities;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Cliente {
    private String nome;
    private String cpf;

    public Cliente(String nome, String cpf){
        this.nome = nome;
        this.cpf = cpf;
    }

    public String infoCliente(){
        return ("Nome: "+this.nome+" | Cpf: "+this.cpf);
    }

}
