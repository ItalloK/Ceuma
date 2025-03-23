package org.example;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Veiculo {
    private String modelo;
    private String marca;
    private int ano;

    public Veiculo(String modelo, String marca, int ano){
        this.modelo = modelo;
        this.marca = marca;
        this.ano = ano;
    }

    public void infoVeiculo(){

        System.out.println("--------------------------------------------------------------------");
        System.out.printf("Modelo: %s | Marca: %s | Ano: %d\n", this.modelo, this.marca, this.ano);
        System.out.println("--------------------------------------------------------------------");

    }

}
