package org.Interfaces;

import org.Entities.Produto;
import org.Entities.Cliente;

public interface ILojaRepository {
    void realizarVenda();
    void cadastrarProduto(Produto p);
    void deletarProduto(Produto p);
    void cadastrarCliente(Cliente c);
    void deletarCliente(Cliente c);

    void listarProdutos();
    void listarCliente();

}
