package org.clinica;


import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Medico {
    private String nome;
    private String especialidade;
    private String crm;


    public Medico() { }

    public Medico(String nome, String especialidade, String crm){
        this.nome = nome;
        this.especialidade = especialidade;
        this.crm = crm;
    }

    public void setNome(String nome){
        if(nome.length() < 3){
            System.err.println("ERRO, O NOME NÃO PODE SER MENOR QUE 3");
            return;
        }
        this.nome = nome;
    }

    public void setCrm(String crm){
        if(crm.length() != 6){
            System.err.println("CODIGO CRM MAIOR QUE 6, DIGITE APENAS OS 6 DIGITOS.");
            return;
        }
        this.crm = crm;
    }
}
