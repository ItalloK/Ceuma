package org.Interfaces;

import org.Entities.Produto;
import org.Entities.Cliente;

public interface ILojaRepository {
    void realizarVenda(Cliente c, Produto[] p);
    void cadastrarProduto(Produto p);
    void removerProduto(Produto p);
    void cadastrarCliente(Cliente c);
    void removerCliente(Cliente c);

    void listarProdutos();
    void listarClientes();

}
