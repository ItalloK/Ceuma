package org.clinica;

import java.util.ArrayList;
import java.util.List;

public class Processamento {

    private List<String> historico = new ArrayList<>();

    public void realizarPagamento(Pagamento metodo, double valor){
        if(metodo.processarPagamento(valor)){
            historico.add(metodo.tipoMetodo() + ": $"+valor);
        }
    }

    public void exibirHistorico(){
        System.out.println("\nHistorico de Pagamentos:");
        for(String transacao : historico){
            System.out.println(transacao);
        }
    }
}
