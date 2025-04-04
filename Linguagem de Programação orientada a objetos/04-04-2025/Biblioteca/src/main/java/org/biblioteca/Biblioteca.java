package org.biblioteca;

import java.util.ArrayList;
import java.util.List;

public class Biblioteca {
    private List<Livro> livros = new ArrayList<>();

    public void cadastrarLivro(Livro livro){
        livros.add(livro);
        System.out.println("Livro Cadastrado! [ Titulo: "+livro.getTitulo()+" | Autor: "+livro.getAutor()+" ]");
    }

    public void emprestarLivro(Aluno aluno, Livro livro){
        if(livro.getAlugado()){
            System.out.println("Esse livro ja foi emprestado.");
            return;
        }
        livro.setAlugado(true);
        System.out.println("Livro: '"+livro.getTitulo()+"' alugado com sucesso!");
    }

    public void emprestarLivro(Professor professor, Livro livro){
        if(livro.getAlugado()){
            System.out.println("Esse livro ja foi emprestado.");
            return;
        }
        livro.setAlugado(true);
        System.out.println("Livro: '"+livro.getTitulo()+"' alugado com sucesso!");
    }

    public void devolverLivro(Livro livro){
        if(livro.getAlugado()){
            livro.setAlugado(false);
            System.out.println("Livro devolvido!");
        }else{
            System.out.println("Livro ainda não foi emprestado!");
            return;
        }
    }

}
