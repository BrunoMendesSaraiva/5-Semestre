package com.revenda; 

public class MarcaModelo {
    private String marca;
    private String modelo;

    // Construtor padrão
    public MarcaModelo() {}

    // Construtor com parâmetros
    public MarcaModelo(String marca, String modelo) {
        this.marca = marca;
        this.modelo = modelo;
    }

    // Getters e Setters
    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
}
