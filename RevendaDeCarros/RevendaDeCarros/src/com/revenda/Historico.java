package com.revenda;

import java.util.Date;

class HistoricoEntrada {
    private int idEntrada;
    private Date dataEntrada;
    private String origem;
    private String nomeFornecedorOuCliente;
    private boolean vendido;
    
    public int getIdEntrada() {
         return idEntrada; }

    public void setIdEntrada(int idEntrada) { 
        this.idEntrada = idEntrada; }

    public Date getDataEntrada() { 
        return dataEntrada; }

    public void setDataEntrada(Date dataEntrada) {
         this.dataEntrada = dataEntrada; }

    public String getOrigem() { 
        return origem; }
    
    public void setOrigem(String origem) { 
        this.origem = origem; }

    public String getNomeFornecedorOuCliente() { 
        return nomeFornecedorOuCliente; }

    public void setNomeFornecedorOuCliente(String nomeFornecedorOuCliente) { 
        this.nomeFornecedorOuCliente = nomeFornecedorOuCliente; }

    public boolean isVendido() {
         return vendido; }

    public void setVendido(boolean vendido) { 
        this.vendido = vendido; }

}