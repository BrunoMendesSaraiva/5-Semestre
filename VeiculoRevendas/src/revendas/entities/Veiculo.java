package revendas.entities;

import java.util.Date;

public class Veiculo {
    private int matricula;
    private Date dataDeEntrada;
    private String estadoPreservacao;
    private String potencia;
    private int kilometragem;
    private int Cilindrada;
    private Date dataMatricula;
    private String tipo;
    private String Marca;
    private String modelo;
    private String cor;
    
    public int getMatricula() {
        return matricula;
    }
    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }
    public Date getDataDeEntrada() {
        return dataDeEntrada;
    }
    public void setDataDeEntrada(Date dataDeEntrada) {
        this.dataDeEntrada = dataDeEntrada;
    }
    public String getEstadoPreservacao() {
        return estadoPreservacao;
    }
    public void setEstadoPreservacao(String estadoPreservacao) {
        this.estadoPreservacao = estadoPreservacao;
    }
    public String getPotencia() {
        return potencia;
    }
    public void setPotencia(String potencia) {
        this.potencia = potencia;
    }
    public int getKilometragem() {
        return kilometragem;
    }
    public void setKilometragem(int kilometragem) {
        this.kilometragem = kilometragem;
    }
    public int getCilindrada() {
        return Cilindrada;
    }
    public void setCilindrada(int cilindrada) {
        Cilindrada = cilindrada;
    }
    public Date getDataMatricula() {
        return dataMatricula;
    }
    public void setDataMatricula(Date dataMatricula) {
        this.dataMatricula = dataMatricula;
    }
    public String getTipo() {
        return tipo;
    }
    public void setTipo(String tipo) {
        this.tipo = tipo;
    }
    public String getMarca() {
        return Marca;
    }
    public void setMarca(String marca) {
        Marca = marca;
    }
    public String getModelo() {
        return modelo;
    }
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
    public String getCor() {
        return cor;
    }
    public void setCor(String cor) {
        this.cor = cor;
    }
}