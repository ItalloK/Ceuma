package org.clinica;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Medico {
    private String nome;
    private String crm;

    public Medico(String nome, String crm){
        this.nome = nome;
        this.crm = crm;
    }

}
