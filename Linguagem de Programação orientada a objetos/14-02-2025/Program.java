public class Program {
    public static void main(String[] args) {
        Onibus onibus = new Onibus(200, 20);
        onibus.calcularCusto(100);
        onibus.mostrarInformacoes();

        System.out.println("-------------------------------------------------------");

        Trem tremEco = new Trem(2, 1); // economica
        Trem tremExe = new Trem(2, 2); // executiva
        tremEco.calcularCusto(200);
        tremExe.calcularCusto(200);
        tremEco.mostrarInformacoes();
        tremExe.mostrarInformacoes();

        System.out.println("-------------------------------------------------------");

        Carro c1 = new Carro(2);
        c1.setCapacidadeAtual(4);
        c1.calcularCusto(200);
        c1.mostrarInformacoes();

        Carro c2 = new Carro(5);
        c2.setCapacidadeAtual(6);
        c2.mostrarInformacoes();
        c2.calcularCusto(100);
    }
}
