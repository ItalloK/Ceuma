package org.clinica;

public class Main {
    public static void main(String[] args) {

        Clinica clinica = new Clinica();

        /*------------------------------------------------------------------*/

        Paciente p = new Paciente("Italo", "12345678912");
        p.setNome("AB"); // erro, nome menor que 3 letras
        p.setCpf("123456789"); // erro, o cpf tem menos de 11 digitos
        Paciente p2 = new Paciente("Gabriel", "12345678921");

        /*------------------------------------------------------------------*/

        Medico m = new Medico("Barbara", "Neurologista", "123456");

        try {
            m.setNome("AB"); // erro, nome menor que 3 letras
        } catch (RuntimeException rs) {
            System.out.println(rs.getMessage());
        }

        try{
            m.setCrm("1234567"); // erro, só pode 6 digitos.
        }catch (RuntimeException rs){
            System.out.println(rs.getMessage());
        }

        Medico m2 = new Medico("Maria", "Pediatra", "654321");

        System.out.println("--------------------------------------------------------------");

        /*------------------------------------------------------------------*/

        final String data1 = "2025";
        final String data2 = "2026";
        clinica.agendarConsulta(m, p, data1);
        clinica.agendarConsulta(m, p, data2);

        clinica.agendarConsulta(m2, p2, "2027");

        System.out.println("--------------------------------------------------------------");

        /*------------------------------------------------------------------*/

        clinica.listarPorMedico(m);
        clinica.listarPorMedico(m2);
        clinica.listarPorPaciente(p);
        clinica.listarPorPaciente(p2);
    }
}