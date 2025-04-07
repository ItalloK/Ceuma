package org.Entities;

public class Feijao extends Produto{
    private double peso;

    public Feijao(int estoque, String codigoDeBarras, int preco, double peso){
        super(estoque, codigoDeBarras, preco);
        this.peso = peso;
    }

    @Override
    public String infoProduto(){
        return ("Nome: Feijao | Estoque: "+getEstoque()+" | Codigo de Barras: "+getCodigoDeBarras()+" | Preco: "+getPreco()+" | Peso: "+this.peso+"Kg");
    }

    @Override
    public String getNomeProduto(){
        return "Feijao";
    }
}
