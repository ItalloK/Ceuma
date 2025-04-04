package org.biblioteca;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Professor extends Usuario{

    private String codigo;

    public Professor(String nome, String codigo){
        super(nome);
        this.codigo = codigo;
        System.out.printf("Professor Cadastrado! [ Nome: %s | Codigo: %s ]\n", getNome(), this.codigo);
    }

    @Override
    public void mostrarInformacoes(){
        System.out.println("Nome professor: "+getNome()+" | Codigo: "+this.codigo);
    }
}
