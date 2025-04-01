package org.clinica;


import lombok.Getter;
import lombok.Setter;

@Getter @Setter

public class Consulta {
    private Medico medico;
    private Paciente paciente;
    private String tipoConsulta;

    public Consulta(Medico medico, Paciente paciente, String tipoConsulta){
        this.medico = medico;
        this.paciente = paciente;
        this.tipoConsulta = tipoConsulta;
    }


}
