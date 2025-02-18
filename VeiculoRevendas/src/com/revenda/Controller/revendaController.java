package com.revenda.Controller;

import com.revenda.Cliente;
import com.revenda.Fornecedor;
import com.revenda.Veiculo;
import com.revenda.MarcaModelo;

public class revendaController {
    public static void main(String[] args) {
        // Criando um cliente
        Cliente cli1 = new Cliente();
        cli1.setCpf("123123123123");
        cli1.setNome("Gabriel");

        // Criando um fornecedor
        Fornecedor forn1 = new Fornecedor();
        forn1.setCpfCnpj("123123123123");
        forn1.setNome("Josebal da Silva");
        forn1.setForneceVeic(null); // Sem veículo inicialmente

        // Criando um veículo com marca e modelo
        Veiculo carro = new Veiculo();
        carro.setMarcaModelo(new MarcaModelo("Toyota", "Corolla"));

        // Exibindo informações do veículo
        System.out.println("A marca do veículo é: " + carro.getMarcaModelo().getMarca());
    }
}
