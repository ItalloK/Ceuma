package org.clinica;


import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Medico {
    private String nome;
    private String especialidade;
    private String crm;

    public Medico(String nome, String especialidade, String crm){
        this.nome = nome;
        this.especialidade = especialidade;
        this.crm = crm;
    }

    public void setNome(String nome){
        if(nome.length() < 3){
            throw new RuntimeException("ERRO, O NOME NÃO PODE SER MENOR QUE 3 DIGITOS.");
        }
        this.nome = nome;
    }

    public void setCrm(String crm){
        if(crm.length() != 6){
            throw new RuntimeException("CODIGO CRM MAIOR QUE 6, DIGITE APENAS OS 6 DIGITOS.");
        }
        this.crm = crm;
    }
}
