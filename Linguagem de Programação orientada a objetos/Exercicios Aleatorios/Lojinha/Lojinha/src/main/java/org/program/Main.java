package org.program;

import org.Entities.Arroz;
import org.Entities.Cliente;
import org.Repositories.LojaRepository;

public class Main {
    public static void main(String[] args) {

        LojaRepository lojaRepository = new LojaRepository();

        Cliente cliente = new Cliente("Italo", "12345678912");
        Arroz arroz = new Arroz(10, "111", 29, 5.00);
        arroz.infoProduto();

        lojaRepository.cadastrarProduto(arroz);
        lojaRepository.listarProdutos();

    }
}