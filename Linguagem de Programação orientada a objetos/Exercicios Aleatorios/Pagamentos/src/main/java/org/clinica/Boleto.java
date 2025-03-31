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
    public boolean realizarPagamento(double valor){
        return true;
    }

    @Override
    public String tipoMetodo(){
        return "Boleto";
    }
}
