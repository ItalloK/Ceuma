package org.biblioteca;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Livro {
    private String titulo;
    private String autor;
    private Boolean alugado;

    public Livro(String titulo, String autor){
        this.titulo = titulo;
        this.autor = autor;
        this.alugado = false;
        System.out.printf("Livro Criado! [ Titulo: %s | Autor: %s | Status: %s ]\n", this.titulo, this.autor, this.alugado ? "Alugado" : "Disponivel");
    }

    public void infoLivro(){
        System.out.printf("[ Titulo: %s | Autor: %s | Status: %s ]\n", this.titulo, this.autor, this.alugado ? "Alugado" : "Disponivel");
    }
}
