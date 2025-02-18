package com.revenda;

import java.util.Date;

public class Veiculo {
    private String matricula;
    private MarcaModelo marcaModelo;
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
         this.quilometragem = quilometragem; }

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

    public MarcaModelo getMarcaModelo() {
        return marcaModelo;
    }
        
    public void setMarcaModelo(MarcaModelo marcaModelo) {
        this.marcaModelo = marcaModelo;
    }       
}