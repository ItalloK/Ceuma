package org.example;

import java.util.ArrayList;
import java.util.List;

public class Biblioteca {

    private List<Livro> livros;

    public Biblioteca(){
        this.livros = new ArrayList<>();
    }

    public void adicionarLivro(Livro l){
        livros.add(l);
    }

    public void emprestarLivro(String titulo) {
        for (Livro l : livros) {
            if (l.getTitulo().equalsIgnoreCase(titulo)) {
                if (l.getEmprestado()) {
                    System.out.println("Livro já está emprestado.");
                } else {
                    l.setEmprestado(true);
                    System.out.println("Livro '"+l.getTitulo()+"' emprestado com sucesso.");
                }
                return;
            }
        }
        System.out.println("Livro não encontrado.");
    }

    public void devolverLivro(String titulo){
        for(Livro l : livros){
            if(l.getTitulo().equalsIgnoreCase(titulo)){
                if(l.getEmprestado()){
                    l.setEmprestado(false);
                    System.out.println("Você devolveu o livro '"+l.getTitulo()+"'.");
                }else{
                    System.out.println("Esse livro não está emprestado.");
                }
                return;
            }
        }
        System.out.println("Livro não encontrado.");
    }

    public void listarLivros(){
        System.out.println("---------------------------- Lista de Livros ----------------------------");
        for(Livro l : livros){
            System.out.printf("Titulo: %s | Autor: %s | Status: %s\n", l.getTitulo(), l.getAutor(), l.getEmprestado() ? "Emprestado" : "Liberado");
        }
        System.out.println("---------------------------- Lista de Livros ----------------------------");
    }


}
