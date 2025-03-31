package org.clinica;

public interface Pagamento {
    boolean processarPagamento(double valor);
    String tipoMetodo();
}
