package org.Entities;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Produto {
    private int estoque;
    private String codigoDeBarras;
    private int preco;

    public Produto(int estoque, String codigoDeBarras, int preco){
        this.estoque = estoque;
        this.codigoDeBarras = codigoDeBarras;
        this.preco = preco;
    }

    public String infoProduto(){
        return "";
    }

}
