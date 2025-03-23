package org.example;

public class Main {
    public static void main(String[] args) {

        Carro carro = new Carro("Uno", "Fiat", 2010, 4);
        carro.infoVeiculo();

        Moto moto = new Moto("CG-125", "Honda", 2020, 125);
        moto.infoVeiculo();

        Cliente cliente = new Cliente("Italo");
        System.out.println("Valor Aluguel Carro: "+ cliente.calcularAluguel(carro, 10));
        System.out.println("Valor Aluguel Moto: "+ cliente.calcularAluguel(moto, 10));


        System.out.println("Valor Aluguel Carro + Seguro: "+ cliente.calcularAluguel(carro, 10, true));
        System.out.println("Valor Aluguel Moto + Seguro: "+ cliente.calcularAluguel(moto, 10, true));

    }
}