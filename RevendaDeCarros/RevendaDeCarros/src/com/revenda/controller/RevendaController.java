package com.revenda;

public class RevendaController {
    
    public static void main(String[] args) {

        Cliente cli1 = new Cliente();
        cli1.setCpf("000.000.000.00");
        cli1.setNome("Bruno Mendes");

        Fornecedor forc1 = new Fornecedor();
        forc1.forneceVeiculo();

        Veiculo v = forc1.getveiculo();

        // System.out.println("A marca do veiculo e:"+v.getMarcaModelo())
        System.out.println("Revenda de Veículos Iniciada!");
    }
}