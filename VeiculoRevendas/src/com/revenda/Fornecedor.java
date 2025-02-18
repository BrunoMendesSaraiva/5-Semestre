package com.revenda;

public class Fornecedor {
    private String cpfCnpj;
    private String nome;
    private String endereco;
    private String telefone;
    private String email;
    private Veiculo veiculo;
    
    public String getCpfCnpj() { 
        return cpfCnpj; }

    public void setCpfCnpj(String cpfCnpj) { 
        this.cpfCnpj = cpfCnpj; }

    public String getNome() { 
        return nome; }

    public void setNome(String nome) {
         this.nome = nome; }

    public String getEndereco() {
         return endereco; }

    public void setEndereco(String endereco) { 
        this.endereco = endereco; }

    public String getTelefone() { 
        return telefone; }

    public void setTelefone(String telefone) {
         this.telefone = telefone; }

    public String getEmail() { 
        return email; }

    public void setEmail(String email) { 
        this.email = email; }

    public void setForneceVeic(Veiculo veiculo) {
        this.veiculo = veiculo;
     }
        
     public Veiculo getForneceVeic() {
        return veiculo;
    }

}