package org.clinica;

public class Main {
    public static void main(String[] args) {

        Clinica clinica = new Clinica();

        Medico medico1 = new Medico("Barbara", "123456");
        Paciente paciente1 = new Paciente("Italo", "12345678912");

        Medico medico2 = new Medico("Usuario 01", "654321");
        Paciente paciente2 = new Paciente("Usuario 02", "12987654321");

        clinica.cadastrarMedico(medico1);
        clinica.cadastrarMedico(medico2);

        clinica.cadastrarPaciente(paciente1);
        clinica.cadastrarPaciente(paciente2);

        clinica.marcarConsulta(medico1, paciente1, "Otorrino");
        clinica.marcarConsulta(medico2, paciente2, "Neurologia");

        clinica.listarMedicos();
        clinica.listarPacientes();
        clinica.listarConsultas();


    }
}