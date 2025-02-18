package revendas.entities;

import java.util.Date;

public class vendasEfetuadas {
    private int cpf;
    private Date dataVenda;
    private float comissaoVenda;
    private int calculoPremio;
    
    public int getCpf() {
        return cpf;
    }
    public void setCpf(int cpf) {
        this.cpf = cpf;
    }
    public Date getDataVenda() {
        return dataVenda;
    }
    public void setDataVenda(Date dataVenda) {
        this.dataVenda = dataVenda;
    }
    public float getComissaoVenda() {
        return comissaoVenda;
    }
    public void setComissaoVenda(float comissaoVenda) {
        this.comissaoVenda = comissaoVenda;
    }
    public int getCalculoPremio() {
        return calculoPremio;
    }
    public void setCalculoPremio(int calculoPremio) {
        this.calculoPremio = calculoPremio;
    }
}