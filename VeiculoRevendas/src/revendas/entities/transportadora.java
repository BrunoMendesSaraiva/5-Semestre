package revendas.entities;

public class transportadora {
    private int id;
    private String meioTransporte;
    private String rotaViagem;
    
    public int getId() {
        return id;
    }
    public void setId(int id) {
        this.id = id;
    }
    public String getMeioTransporte() {
        return meioTransporte;
    }
    public void setMeioTransporte(String meioTransporte) {
        this.meioTransporte = meioTransporte;
    }
    public String getRotaViagem() {
        return rotaViagem;
    }
    public void setRotaViagem(String rotaViagem) {
        this.rotaViagem = rotaViagem;
    }
}