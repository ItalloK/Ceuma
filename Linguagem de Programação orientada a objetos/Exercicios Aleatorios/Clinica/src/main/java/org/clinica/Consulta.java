package org.clinica;


import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Consulta {
    private Paciente paciente;
    private Medico medico;
    private String data;

    public Consulta(Medico medico, Paciente paciente, String data){
        this.medico = medico;
        this.paciente = paciente;
        this.data = data;
    }

    public void infoConsulta(){
        System.out.println("Medico: "+this.medico.getNome()+" | Paciente: "+this.paciente.getNome()+" | Data: "+this.data);
    }

}
