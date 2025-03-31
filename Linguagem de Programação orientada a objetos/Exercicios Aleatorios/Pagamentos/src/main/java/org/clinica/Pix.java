package org.clinica;


import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Pix implements Pagamento{

    private String chavePix;
    private double saldo;

    public Pix(String chavePix, double saldo){
        this.chavePix = chavePix;
        this.saldo = saldo;
    }

    @Override
    public boolean realizarPagamento(double valor){
        return true;
    }

    @Override
    public String tipoMetodo(){
        return "PIX";
    }
}
