package revendas.controller;

import revendas.entities.Cliente;
import revendas.entities.fornecedorProprietario;
import revendas.entities.Veiculo;


public class revendaController {
    
    public static void main (String[] args){
        Cliente cli1 = new Cliente();
        cli1.setCpf("123123123123");
        cli1.setNome("gabriel");

        fornecedorProprietario forn1 = new fornecedorProprietario();
        forn1.setCpf("123123123123");
        forn1.setNome("josebal da silva");
        forn1.setForneceVeic(null);

        Veiculo v = forn1.getForneceVeic();

        // System.out.println("A marca do veiculo é: " + v.getMarcaModelo());
    }
}
