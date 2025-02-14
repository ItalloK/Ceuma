public class Trem extends Veiculo {
    private int tipo; // 1 == Economica (1.0x) | 2 == Executiva (1.5x)

    public Trem(double custoPorKm, int tipo){
        this.capacidade = 200;
        this.custoPorKm = custoPorKm;
        this.tipo = tipo;
        switch (tipo) {
            case 1:{
                this.custoPorKm = this.custoPorKm * 1.0;
                break;
            }        
            case 2:{
                this.custoPorKm = this.custoPorKm * 1.5;
                break;
            }
        }
    }

    public void calcularCusto(double distancia){
        System.out.println("Custo total para trem: "+(distancia * custoPorKm));
    }

    public void mostrarInformacoes(){
        if(this.tipo == 1){
            System.out.println("Preço para trem (Economica): "+this.custoPorKm);
        }else if(tipo == 2){
            System.out.println("Preço para trem (Executiva): "+this.custoPorKm);
        }        
    }
}   
