package revendas.entities;

import java.util.Date;

public class valores {
    private String placaCarro;
    private int valorVenda;
    private int custoAtribuido;
    private Date dataVenda;
    private String condicao;
    
    public String getPlacaCarro() {
        return placaCarro;
    }
    public void setPlacaCarro(String placaCarro) {
        this.placaCarro = placaCarro;
    }
    public int getValorVenda() {
        return valorVenda;
    }
    public void setValorVenda(int valorVenda) {
        this.valorVenda = valorVenda;
    }
    public int getCustoAtribuido() {
        return custoAtribuido;
    }
    public void setCustoAtribuido(int custoAtribuido) {
        this.custoAtribuido = custoAtribuido;
    }
    public Date getDataVenda() {
        return dataVenda;
    }
    public void setDataVenda(Date dataVenda) {
        this.dataVenda = dataVenda;
    }
    public String getCondicao() {
        return condicao;
    }
    public void setCondicao(String condicao) {
        this.condicao = condicao;
    }


}
