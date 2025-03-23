package org.example;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Moto extends Veiculo {
    private int cilindradas;

    public Moto(String modelo, String marca, int ano, int cilindradas){
        super(modelo, marca, ano);
        this.cilindradas = cilindradas;
    }

    @Override
    public void infoVeiculo(){

        System.out.println("--------------------------------------------------------------------");
        System.out.printf("Modelo: %s | Marca: %s | Ano: %d | Cilindradas: %d\n", this.getModelo(), this.getMarca(), this.getAno(), this.cilindradas);
        System.out.println("--------------------------------------------------------------------");

    }


}
