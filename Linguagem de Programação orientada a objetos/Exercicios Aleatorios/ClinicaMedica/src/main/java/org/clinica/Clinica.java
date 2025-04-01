package org.clinica;

import java.util.ArrayList;
import java.util.List;

public class Clinica implements IMedical{

    private List<Medico> medicos = new ArrayList<>();
    private List<Paciente> pacientes = new ArrayList<>();
    private List<Consulta> consultas = new ArrayList<>();

    @Override
    public void cadastrarMedico(Medico medico){
        medicos.add(medico);
        System.out.println("Medico cadastrado!");
    }

    @Override
    public void cadastrarPaciente(Paciente paciente){
        pacientes.add(paciente);
        System.out.println("Paciente cadastrado!");
    }

    @Override
    public void marcarConsulta(Medico medico, Paciente paciente, String tipoConsulta){
        Consulta consulta = new Consulta(medico, paciente, tipoConsulta);
        consultas.add(consulta);
        System.out.println("Consulta marcada!");
    }

    @Override
    public void listarMedicos(){
        System.out.println("Lista de Medicos:");
        for(Medico m : medicos){
            System.out.println("Nome: "+m.getNome()+" | CRM: "+m.getCrm());
        }
    }

    @Override
    public void listarPacientes(){
        System.out.println("Lista de Pacientes:");
        for(Paciente c : pacientes){
            System.out.println("Nome: "+c.getNome()+" | CPF: "+c.getCpf());
        }
    }

    @Override
    public void listarConsultas(){
        System.out.println("Lista de Consultas:");
        for(Consulta c : consultas){
            System.out.println("Tipo de Consulta: "+c.getTipoConsulta()+" | Medico: "+c.getMedico().getNome()+" | Paciente: "+c.getPaciente().getNome());
        }
    }
}
