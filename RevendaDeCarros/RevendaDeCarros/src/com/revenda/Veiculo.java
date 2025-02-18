package com.revenda;

import java.util.Date;

class Veiculo {
    private String matricula;
    private String marcaModelo; 
    // private String descricao;
    private String cor;
    private int cilindrada;
    private int quilometragem;
    private boolean novo;
    private String tipo;
    private Date dataMatricula;
    
    public String getMatricula() {
         return matricula; }

    public void setMatricula(String matricula) { 
        this.matricula = matricula; }

    public String getModelo() {
         return modelo; }

    public void setModelo(String modelo) { 
        this.modelo = modelo; }

    public String getMarca() { 
        return marca; }
        
    public void setMarca(String marca) { 
        this.marca = marca; }

    public String getCor() {
         return cor; }

    public void setCor(String cor) {
         this.cor = cor; }

    public int getCilindrada() {
        return cilindrada; }

    public void setCilindrada(int cilindrada) {
         this.cilindrada = cilindrada; }

    public int getQuilometragem() { 
        return quilometragem; }

    public void setQuilometragem(int quilometragem) { 
        his.quilometragem = quilometragem; }

    public boolean isNovo() { 
        return novo; }
        
    public void setNovo(boolean novo) { 
        this.novo = novo; }

    public String getTipo() { 
        return tipo; }

    public void setTipo(String tipo) { 
        this.tipo = tipo; }

    public Date getDataMatricula() {
         return dataMatricula; }

    public void setDataMatricula(Date dataMatricula) { 
        this.dataMatricula = dataMatricula; }
}