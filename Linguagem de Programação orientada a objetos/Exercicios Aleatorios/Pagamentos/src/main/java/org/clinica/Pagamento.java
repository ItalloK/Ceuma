package org.clinica;

public interface Pagamento {
    boolean realizarPagamento(double valor);
    String tipoMetodo();
}
