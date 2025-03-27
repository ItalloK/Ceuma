package org.example;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Livro {
    private String titulo;
    private String autor;
    private Boolean emprestado;

    public Livro(String titulo, String autor){
        this.titulo = titulo;
        this.autor = autor;
        this.emprestado = false;
    }

}
