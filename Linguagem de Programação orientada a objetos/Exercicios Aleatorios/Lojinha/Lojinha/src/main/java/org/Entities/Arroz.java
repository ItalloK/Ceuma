package org.Entities;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Arroz extends Produto {
    private double peso;

    public Arroz(int estoque, String codigoDeBarras, int preco, double peso){
        super(estoque, codigoDeBarras, preco);
        this.peso = peso;
    }

    @Override
    public String infoProduto(){
        return ("Nome: Arroz | Estoque: "+getEstoque()+" | Codigo de Barras: "+getCodigoDeBarras()+" | Preco: "+getPreco()+" | Peso: "+this.peso+"Kg");
    }

}
