package org.example;

public class Main {
    public static void main(String[] args) {

        Cliente cliente = new Cliente("Italo");

        Biblioteca biblioteca = new Biblioteca();
        biblioteca.adicionarLivro(new Livro("Harry Potter", "JK"));
        biblioteca.adicionarLivro(new Livro("Interstellar", "Christopher Nolan"));

        biblioteca.listarLivros();

        biblioteca.emprestarLivro("Harry Potter");
        biblioteca.emprestarLivro("Harry Potter"); // Livro ja emprestado
        biblioteca.emprestarLivro("Interstellar");

        biblioteca.listarLivros();

        biblioteca.devolverLivro("Harry Potter");
        biblioteca.devolverLivro("Harry potter"); // Livro ja devolvido

        biblioteca.listarLivros();


    }
}