package org.Repositories;

import org.Entities.Cliente;
import org.Entities.Produto;
import org.Interfaces.ILojaRepository;

import java.util.ArrayList;
import java.util.List;

public class LojaRepository implements ILojaRepository {

    private List<Cliente> clientesL = new ArrayList<>();
    private List<Produto> produtosL = new ArrayList<>();
    private List<Produto> produtosVenda = new ArrayList<>();

    public void realizarVenda(Cliente cliente, Produto... produtos) {
        int valorTotal = 0;
        if (clientesL.contains(cliente)) {
            System.out.println("Cliente encontrado! Realizando venda...");
            for (int i = 0; i < produtos.length; i++) {
                if (!produtosL.contains(produtos[i])) {
                    System.out.println(produtos[i].getNomeProduto() + " não cadastrado...");
                    return;
                } else {
                    // Verifica se tem estoque suficiente
                    if (produtos[i].getEstoque() > 0) {
                        produtosVenda.add(produtos[i]);
                        System.out.println("[ " + produtos[i].infoProduto() + " ] Adicionado à Lista de Venda!");
                        valorTotal += produtos[i].getPreco();
                        produtos[i].setEstoque(produtos[i].getEstoque() - 1);
                    } else {
                        System.out.println("Produto " + produtos[i].getNomeProduto() + " sem estoque disponível. Venda cancelada.");
                        return;
                    }
                }
            }
            System.out.println("Valor total da compra: R$ " + valorTotal);
        } else {
            System.out.println("Cliente não encontrado. Venda cancelada.");
            return;
        }
    }

    public void cadastrarProduto(Produto p){
        produtosL.add(p);
        System.out.println("Produto [ "+p.infoProduto()+" ] cadastrado com Sucesso!");
    }

    public void removerProduto(Produto p){
        produtosL.remove(p);
        System.out.println("Produto [ "+p.infoProduto()+" ] removido com Sucesso!");
    }

    public void cadastrarCliente(Cliente c){
        clientesL.add(c);
        System.out.println("Cliente: [ "+c.infoCliente()+" ] cadastrado com Sucesso!");
    }

    public void removerCliente(Cliente c){
        clientesL.remove(c);
        System.out.println("Cliente: [ "+c.infoCliente()+" ] removido com Sucesso!");
    }

    public void listarProdutos(){
        System.out.println("Lista de Produtos:");
        for(Produto p : produtosL){
            System.out.println(p.infoProduto());
        }
    }

    public void listarClientes(){
        System.out.println("Lista de Cliente:");
        for(Cliente c: clientesL){
            System.out.println(c.infoCliente());
        }
    }
}
