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
    public boolean processarPagamento(double valor){
        if(valor <= limiteDisponivel){
            limiteDisponivel -= valor;
            System.out.println("Pagamento de $"+valor+" aprovado no cartão de crédito!");
            return true;
        }
        System.out.println("Pagamento inválido: Limite indisponivel.");
        return false;
    }

    @Override
    public String tipoMetodo(){
        return "Cartão de Credito";
    }

}
