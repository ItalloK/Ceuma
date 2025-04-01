package org.clinica;

public interface IMedical {
    public void cadastrarMedico(Medico medico);
    public void cadastrarPaciente(Paciente paciente);
    public void marcarConsulta(Medico medico, Paciente paciente, String tipoConsulta);
    public void listarMedicos();
    public void listarPacientes();
    public void listarConsultas();
}
