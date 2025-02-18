package revendas.entities;

public class Cliente {
    private String nome;
    private String cpf;
    private String localidade;
    private String endereço;
    private String rg;
    private String classificacao;
    private String associacao;

    public String getLocalidade() {
        return localidade;
    }
    public void setLocalidade(String localidade) {
        this.localidade = localidade;
    }
    public String getEndereço() {
        return endereço;
    }
    public void setEndereço(String endereço) {
        this.endereço = endereço;
    }
    public String getRg() {
        return rg;
    }
    public void setRg(String rg) {
        this.rg = rg;
    }
    public String getClassificacao() {
        return classificacao;
    }
    public void setClassificacao(String classificacao) {
        this.classificacao = classificacao;
    }
    public String getAssociacao() {
        return associacao;
    }
    public void setAssociacao(String associacao) {
        this.associacao = associacao;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public void setCpf(String cpf) {
        this.cpf = cpf;
    }
    public String getNome() {
        return nome;
    }
    public String getCpf() {
        return cpf;
    }
}