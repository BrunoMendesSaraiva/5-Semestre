package com.revenda;

public class Valor {
    private int idValor;
    private double valorCompra;
    private double valorPretendidoVenda;
    private double custosAtribuidos;
    private double precoFinalVenda;
    
    public int getIdValor() { 
        return idValor; }

    public void setIdValor(int idValor) {
         this.idValor = idValor; }

    public double getValorCompra() {
         return valorCompra; }

    public void setValorCompra(double valorCompra) { 
        this.valorCompra = valorCompra; }

    public double getValorPretendidoVenda() {
        return valorPretendidoVenda; }

    public void setValorPretendidoVenda(double valorPretendidoVenda) { 
        this.valorPretendidoVenda = valorPretendidoVenda; }

    public double getCustosAtribuidos() {
         return custosAtribuidos; }

    public void setCustosAtribuidos(double custosAtribuidos) { 
        this.custosAtribuidos = custosAtribuidos; }

    public double getPrecoFinalVenda() { 
        return precoFinalVenda; }

    public void setPrecoFinalVenda(double precoFinalVenda) { 
        this.precoFinalVenda = precoFinalVenda; }

}