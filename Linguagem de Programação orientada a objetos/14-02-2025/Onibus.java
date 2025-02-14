public class Onibus extends Veiculo {

    public Onibus(double distancia, double custoPorKm){
        this.distancia = distancia;
        this.custoPorKm = custoPorKm;
        this.capacidade = 50;
    }

    public void calcularCusto(double distancia){
        System.out.println("Custo total para onibus: "+(distancia * custoPorKm));
    }
    public void mostrarInformacoes(){
        System.out.println("Capacidade: "+this.capacidade+" pessoa");
    }
}
