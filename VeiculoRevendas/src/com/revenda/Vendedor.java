package com.revenda;

public class Vendedor {
    private int idVendedor;
    private String nome;
    private double comissao;
    private String telefone;
    private String email;
    
    public int getIdVendedor() { 
        return idVendedor; }

    public void setIdVendedor(int idVendedor) { 
        this.idVendedor = idVendedor; }

    public String getNome() {
         return nome; }

    public void setNome(String nome) {
         this.nome = nome; }

    public double getComissao() {
         return comissao; }

    public void setComissao(double comissao) { 
        this.comissao = comissao; }

    public String getTelefone() {
         return telefone; }

    public void setTelefone(String telefone) {
         this.telefone = telefone; }

    public String getEmail() { 
        return email; }

    public void setEmail(String email) {
         this.email = email; }

}