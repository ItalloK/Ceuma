package org.Repositories;

import org.Entities.Cliente;
import org.Entities.Produto;
import org.Interfaces.ILojaRepository;

import java.util.ArrayList;
import java.util.List;

public class LojaRepository implements ILojaRepository {

    private List<Cliente> clientes = new ArrayList<>();
    private List<Produto> produtos = new ArrayList<>();


    public void realizarVenda(){

    }
    public void cadastrarProduto(Produto p){
        produtos.add(p);
        System.out.println("Produto [ "+p.infoProduto()+" ] cadastrado com Sucesso!");
    }
    public void deletarProduto(Produto p){

    }
    public void cadastrarCliente(Cliente c){

    }
    public void deletarCliente(Cliente c){

    }

    public void listarProdutos(){
        System.out.println("Lista de Produtos:");
        for(Produto p : produtos){
            System.out.println(p.infoProduto());
        }
    }

    public void listarCliente(){
        System.out.println("Lista de Cliente:");
        for(Cliente c: clientes){
            System.out.println(c.infoCliente());
        }
    }
}
