package org.biblioteca;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Aluno extends Usuario{
    private String ra;

    public Aluno(String nome, String ra){
        super(nome);
        this.ra = ra;
        System.out.printf("Aluno Cadastrado! [ Nome: %s | Ra: %s ]\n", getNome(), this.ra);
    }

    @Override
    public void mostrarInformacoes(){
        System.out.println("Nome aluno: "+getNome()+" | Ra: "+this.ra);
    }
}
