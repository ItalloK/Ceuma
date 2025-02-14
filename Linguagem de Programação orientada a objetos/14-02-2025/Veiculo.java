public abstract class Veiculo{
    protected double distancia;
    protected double custoPorKm;
    protected int capacidade;

    public double getDistancia(){
        return this.distancia;
    }
    public void setDistancia(double distancia){
        this.distancia = distancia;
    }

    public double getCustoPorKm(){
        return this.custoPorKm;
    }
    public void setCustoPorKm(double custoPorKm){
        this.custoPorKm = custoPorKm;
    }

    public int getCapacidade(){
        return this.capacidade;
    }
    public void setCapacidade(int capacidade){
        this.capacidade = capacidade;
    }

    public abstract void calcularCusto(double distancia);
    public abstract void mostrarInformacoes();
}