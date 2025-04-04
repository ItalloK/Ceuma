package org.biblioteca;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public abstract class Usuario {

    private String nome;


    public Usuario(String nome){
        this.nome = nome;
    }

    abstract void mostrarInformacoes();


}
