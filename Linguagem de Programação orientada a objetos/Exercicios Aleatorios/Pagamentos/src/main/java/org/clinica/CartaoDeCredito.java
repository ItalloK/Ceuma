package org.clinica;


import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class CartaoDeCredito implements Pagamento{

    private String numeroCartao;
    private String titular;
    private double limiteDisponivel;

    public CartaoDeCredito(String numeroCartao, String titular, double limiteDisponivel){
        this.numeroCartao = numeroCartao;
        this.titular = titular;
        this.limiteDisponivel = limiteDisponivel;
    }

    @Override
    public boolean realizarPagamento(double valor){
        return true;
    }

    @Override
    public String tipoMetodo(){
        return "Cartão de Credito";
    }

}
