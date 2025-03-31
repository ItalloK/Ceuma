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
    public boolean processarPagamento(double valor){
        if(valor <= saldo){
            saldo -= valor;
            System.out.println("Pagamento de $"+valor+" realizado via PIX.");
            return true;
        }
        System.out.println("Pagamento inválido: Saldo indisponivel.");
        return false;
    }

    @Override
    public String tipoMetodo(){
        return "PIX";
    }
}
