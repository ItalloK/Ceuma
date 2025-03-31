package org.clinica;

public class Main {
    public static void main(String[] args) {

        Processamento p = new Processamento();

        CartaoDeCredito cartao = new CartaoDeCredito("12345", "Italo", 10000);
        Pix pix = new Pix("12345678912", 1000);
        Boleto boleto = new Boleto("1234-1234-1234-1234");


        p.realizarPagamento(cartao, 1000);
        p.realizarPagamento(pix, 500);
        p.realizarPagamento(boleto, 250);

        p.exibirHistorico();


    }
}