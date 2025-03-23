package org.example;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Carro extends Veiculo{

    private int quantidadePortas;

    public Carro(String modelo, String marca, int ano, int quantidadePortas){
        super(modelo, marca, ano);
        this.quantidadePortas = quantidadePortas;
    }

    @Override
    public void infoVeiculo(){

        System.out.println("--------------------------------------------------------------------");
        System.out.printf("Modelo: %s | Marca: %s | Ano: %d | Quantidade de portas: %d\n", this.getModelo(), this.getMarca(), this.getAno(), this.quantidadePortas);
        System.out.println("--------------------------------------------------------------------");

    }
}
