package com.revenda;

import java.util.Date;



class Venda {
    private int idVenda;
    private Date data;
    private double comissao;
    private Cliente cliente;
    private Vendedor vendedor;
    
    public int getIdVenda() { 
        return idVenda; }

    public void setIdVenda(int idVenda) {
         this.idVenda = idVenda; }

    public Date getData() {
         return data; }

    public void setData(Date data) {
         this.data = data; }

    public double getComissao() { 
        return comissao; }

    public void setComissao(double comissao) { this.comissao = comissao; }
    public Cliente getCliente() {
         return cliente; }

    public void setCliente(Cliente cliente) { 
        this.cliente = cliente; }

    public Vendedor getVendedor() {
         return vendedor; }

    public void setVendedor(Vendedor vendedor) {
        this.vendedor = vendedor; }
}