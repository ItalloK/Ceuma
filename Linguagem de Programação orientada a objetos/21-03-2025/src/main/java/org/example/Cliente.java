package org.example;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Cliente {
    private String nome;
    private int resultado = 0;

    final int VALOR_DIARIA_CARRO = 200;
    final int VALOR_DIARIA_MOTO = 100;
    final int VALOR_SEGURO_CARRO = 100;
    final int VALOR_SEGURO_MOTO = 50;

    public Cliente(String nome){
        this.nome = nome;
    }

    public int calcularAluguel(Veiculo v, int dias){

        if(v instanceof Carro)
            return resultado = dias * VALOR_DIARIA_CARRO;
        if(v instanceof Moto)
            return resultado = dias * VALOR_DIARIA_MOTO;

        return resultado;
    }

    public int calcularAluguel(Veiculo v, int dias, boolean seguro){

        if(v instanceof Carro && seguro)
            return resultado = (dias * VALOR_DIARIA_CARRO) + VALOR_SEGURO_CARRO;

        if(v instanceof Moto && seguro)
            return resultado = (dias * VALOR_DIARIA_MOTO) + VALOR_SEGURO_MOTO;

        if(v instanceof Carro && !seguro)
            return resultado = dias * VALOR_DIARIA_CARRO;

        if(v instanceof Moto && !seguro)
            return resultado = dias * VALOR_DIARIA_MOTO;

        return resultado;
    }


}
