package org.biblioteca;

public class Main {
    public static void main(String[] args) {

        Biblioteca biblioteca = new Biblioteca();

        Professor professor = new Professor("Edilson", "123456");
        Aluno aluno = new Aluno("Italo", "044704");

        System.out.println("");

        Livro livro1 = new Livro("Harry Potter", "JK");
        Livro livro2 = new Livro("16 Luas", "Margaret");

        System.out.println("");

        livro1.infoLivro();
        livro2.infoLivro();

        System.out.println("");

        biblioteca.emprestarLivro(aluno, livro1);
        biblioteca.emprestarLivro(aluno, livro1); // erro de livro ja emprestado.

        System.out.println("");

        biblioteca.emprestarLivro(professor, livro2);
        biblioteca.emprestarLivro(professor, livro2);

        System.out.println("");

        biblioteca.devolverLivro(livro1);
        biblioteca.devolverLivro(livro1); // erro livro ja devolvido


    }
}