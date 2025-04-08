package org.program;

import org.Entities.Arroz;
import org.Entities.Cliente;
import org.Entities.Feijao;
import org.Repositories.LojaRepository;

public class Main {
    public static void main(String[] args) {

        LojaRepository lojaRepository = new LojaRepository();

        Cliente cliente = new Cliente("Italo", "12345678912");
        Cliente cliente2 = new Cliente("Usuario Teste 2", "98765432111");
        Arroz arroz = new Arroz(10, "111", 29, 5.00);
        Feijao feijao = new Feijao(10, "222", 9, 1.0);

        lojaRepository.cadastrarProduto(arroz);
        lojaRepository.cadastrarProduto(feijao);
        lojaRepository.listarProdutos();
        lojaRepository.listarClientes();
        lojaRepository.cadastrarCliente(cliente);
        lojaRepository.cadastrarCliente(cliente2);
        lojaRepository.removerCliente(cliente2);
        lojaRepository.removerProduto(feijao);


        lojaRepository.realizarVenda(cliente, arroz, feijao);

        System.out.println(arroz.infoProduto());



    }
}