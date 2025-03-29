package org.clinica;


import lombok.Getter;
import lombok.Setter;

import java.util.ArrayList;
import java.util.List;

@Getter @Setter

public class Clinica {

    private List<Consulta> consultas = new ArrayList<>();

    public boolean agendarConsulta(Medico medico, Paciente paciente, String data){
        for(Consulta c : consultas){
            if(c.getData().equals(data)){
                if(c.getMedico().equals(medico) || c.getPaciente().equals(paciente)){
                    System.err.println("Conflito de horario para " + (c.getMedico().equals(medico) ? "Medico" : "Paciente"));
                    return false;
                }
            }
        }
        consultas.add(new Consulta(medico, paciente, data));
        System.out.println("Consulta agendada com sucesso.");
        return true;
    }

    public void listarPorMedico(Medico medico){
        System.out.println("-------------------------------------------------------");
        System.out.println("Consultas para o Medico: " + medico.getNome() + " CRM: " + medico.getCrm() + ".");
        for(Consulta c : consultas){
            if(c.getMedico().equals(medico)){
                c.infoConsulta();
            }
        }
        System.out.println("-------------------------------------------------------");
    }

    public void listarPorPaciente(Paciente paciente){
        System.out.println("-------------------------------------------------------");
        System.out.println("Consultas para o Paciente: " + paciente.getNome() + " CPF: " + paciente.getCpf() + ".");
        for(Consulta c : consultas){
            if(c.getPaciente().equals(paciente)){
                c.infoConsulta();
            }
        }
        System.out.println("-------------------------------------------------------");
    }

}
