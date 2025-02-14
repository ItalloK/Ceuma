public class Carro extends Veiculo {

    private int capacidadeAtual;
    private final int CAPACIDADE_MAXIMA = 5;

    public Carro(double custoPorKm){
        this.custoPorKm = custoPorKm;
    }

    public int getCapacidadeAtual(){
        return this.capacidadeAtual;
    }
    public void setCapacidadeAtual(int capacidadeAtual){
        if(capacidadeAtual > CAPACIDADE_MAXIMA){
            System.out.println("Voce nao pode setar a capacidade atual acima de: "+CAPACIDADE_MAXIMA);
            return;
        }else{
            this.capacidadeAtual = capacidadeAtual;
        }
    }

    public void calcularCusto(double distancia){
        System.out.println("Custo Carro: "+ ((distancia * this.custoPorKm)/this.capacidadeAtual));
    }

    public void mostrarInformacoes(){
        System.out.println("Custo por KM: " +this.custoPorKm);
        System.out.println("Capacidade maxima: "+CAPACIDADE_MAXIMA);
        System.out.println("Capacidade atual: "+capacidadeAtual);
    }
}
