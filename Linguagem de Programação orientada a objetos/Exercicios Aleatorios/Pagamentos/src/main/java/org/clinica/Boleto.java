package org.clinica;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Boleto implements Pagamento{

    private String codigoDeBarras;

    public Boleto(String codigoDeBarras){
        this.codigoDeBarras = codigoDeBarras;
    }

    @Override
    public boolean processarPagamento(double valor){
        System.out.println("Boleto no valor de $"+valor+" gerado com sucesso, aguarde o pagamento!");
        return true;
    }

    @Override
    public String tipoMetodo(){
        return "Boleto";
    }
}
