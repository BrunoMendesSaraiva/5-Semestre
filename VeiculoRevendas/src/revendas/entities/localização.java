package revendas.entities;

public class localização{
    private int id;
    private String ondeGuardado;
    private String ondeLevado;
    
    public int getId() {
        return id;
    }
    public void setId(int id) {
        this.id = id;
    }
    public String getOndeGuardado() {
        return ondeGuardado;
    }
    public void setOndeGuardado(String ondeGuardado) {
        this.ondeGuardado = ondeGuardado;
    }
    public String getOndeLevado() {
        return ondeLevado;
    }
    public void setOndeLevado(String ondeLevado) {
        this.ondeLevado = ondeLevado;
    }
}