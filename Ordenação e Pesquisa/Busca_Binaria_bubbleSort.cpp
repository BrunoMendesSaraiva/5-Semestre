//busca binária ordenada

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //usa função sort, que deixa a função de vetores ordenados (lib para uso da função sort())
#include <ctime> //lib para medir o tempo
#include <iomanip> //lib para manipução da saida

using namespace std;

void bubbleSort(vector<string>& nomes){
    bool trocou;

    //laço externo: determina a quantidade de passagnes que serão feitas 

    for (size_t i = 0; i < nomes.size() - 1; i++){
        trocou = false; // reinicia a flag para cada passagem 

        //laço interno: percorre o vetor até o ultimo elemento não ordenado
        for(size_t j = 0; j < nomes.size() - 1  - i; j++){

        } 
    }
}

int buscaBinaria(const vector<string>& nomes, const string& chave){
    int inicio = 0;
    int fim = static_cast<int>(nomes.size()) - 1;

    while(inicio <= fim){
        int meio = inicio + (fim - inicio) / 2;

        if(nomes[meio] == chave){
            return meio;
        }
        else if (nomes[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1; // Retorno caso o elemento não seja encontrado
}

int main(){

    const char* arr[] = {
        "Gustavo Costa", "Fabiana Barbosa", "Igor Martins", "Natália Souza", "Bruno Martins", 
        "Otávio Lima", "Carlos Almeida", "Paula Silva", "Alice Lima", "Beatriz Lima", 
        "Beatriz Souza", "Helena Fernandes", "Marcos Almeida", "Daniel Barbosa", "Otávio Dias", 
        "Igor Barbosa", "Marcos Lima", "Eduardo Costa", "Eduardo Fernandes", "Fernanda Silva", 
        "Cecilia Azevedo", "Fernanda Lima", "Juliana Silva", "Larissa Almeida", "Beatriz Silva", 
        "Juliana Barbosa", "Amanda Martins", "Gustavo Barbosa", "Otávio Costa", "Larissa Martins", 
        "Paula Fernandes", "Marcos Dias", "Helena Lima", "Amanda Lima", "Gabriel Almeida", 
        "Carlos Dias", "Helena Costa", "Daniel Silva", "Fernanda Martins", "Marcos Barbosa", 
        "Otávio Barbosa", "Marcos Silva", "Larissa Silva", "Fernanda Fernandes", "Larissa Barbosa", 
        "Cecilia Silva", "Fernanda Souza", "Daniel Dias", "Cecilia Martins", "Eduardo Almeida", 
        "Juliana Almeida", "Fabiana Martins", "Igor Fernandes", "Amanda Fernandes", "Carlos Silva", 
        "Cecilia Souza", "Beatriz Dias", "Marcos Fernandes", "Amanda Barbosa", "Carlos Souza", 
        "Natália Costa", "Helena Silva", "Fabiana Almeida", "Amanda Souza", "Igor Dias", 
        "Amanda Almeida", "Bruno Souza", "Amanda Costa", "Eduardo Dias", "Gabriel Azevedo", 
        "Natália Silva", "Alice Martins", "Carlos Costa", "Alice Silva", "Natália Barbosa", 
        "Bruno Barbosa", "Paula Azevedo", "Bruno Dias", "Daniel Azevedo", "Paula Lima", 
        "Otávio Fernandes", "Larissa Souza", "Fabiana Souza", "Daniel Lima", "Fernanda Azevedo", 
        "Beatriz Almeida", "Fabiana Lima", "Cecilia Dias", "Juliana Souza", "Amanda Azevedo", 
        "Juliana Costa", "Alice Souza", "Fabiana Azevedo", "Igor Lima", "Cecilia Almeida", 
        "Fernanda Costa", "Natália Martins", "Gustavo Fernandes", "Fabiana Silva", "Fabiana Costa", 
        "Fernanda Almeida", "Gabriel Lima", "Beatriz Azevedo", "Cecilia Lima", "Larissa Lima", 
        "Carlos Fernandes", "Natália Almeida", "Alice Fernandes", "Eduardo Martins", "Paula Dias", 
        "Fabiana Fernandes", "Eduardo Souza", "Bruno Lima", "Gustavo Martins", "Alice Barbosa", 
        "Gabriel Costa", "Eduardo Barbosa", "Igor Souza", "Gustavo Lima", "Otávio Almeida", 
        "Beatriz Barbosa", "Natália Azevedo", "Juliana Fernandes", "Bruno Almeida", "Amanda Dias", 
        "Gustavo Souza", "Helena Barbosa", "Igor Almeida", "Cecilia Fernandes", "Helena Dias", 
        "Natália Fernandes", "Alice Costa", "Beatriz Costa", "Juliana Azevedo", "Igor Silva", 
        "Marcos Souza", "Carlos Lima", "Larissa Costa", "Paula Martins", "Paula Almeida", 
        "Daniel Costa", "Daniel Souza", "Daniel Almeida", "Otávio Martins", "Otávio Souza", 
        "Helena Souza", "Eduardo Silva", "Beatriz Martins", "Carlos Martins", "Fabiana Dias", 
        "Fernanda Barbosa", "Gustavo Silva", "Eduardo Lima", "Gabriel Silva", "Natália Dias", 
        "Marcos Azevedo", "Fernanda Dias", "Otávio Silva", "Gustavo Almeida", "Paula Barbosa", 
        "Helena Almeida", "Larissa Azevedo", "Marcos Martins", "Cecilia Costa", "Juliana Dias", 
        "Carlos Barbosa", "Gabriel Fernandes", "Igor Costa", "Bruno Silva", "Gabriel Barbosa", 
        "Daniel Martins", "Eduardo Azevedo", "Bruno Fernandes", "Alice Almeida", "Paula Souza", 
        "Alice Azevedo", "Cecilia Barbosa", "Natália Lima", "Juliana Lima", "Paula Costa", 
        "Larissa Fernandes", "Beatriz Fernandes", "Juliana Martins", "Larissa Dias", "Igor Azevedo", 
        "Marcos Costa", "Gustavo Dias", "Gabriel Martins", "Gustavo Azevedo", "Gabriel Souza", 
        "Daniel Fernandes", "Helena Martins", "Helena Azevedo", "Otávio Azevedo", "Alice Dias", 
        "Amanda Silva", "Bruno Azevedo", "Gabriel Dias", "Carlos Azevedo", "Bruno Costa"
    };

        //calcula o numero de elementos do array
        int n = sizeof(arr)/sizeof(arr[0]);

        vector<string> nomes(arr,arr + n);

        //ordena o vetor "nomes" para que a busca binária funcione corretamente pois o algoritmmo requer dados ordenados.
        sort(nomes.begin(), nomes.end());

        //soliciatação ao usuário.
        string chave;
        cout << "busca binária - digite o nome completo a ser procurado:";
        getline(cin,chave);

            /*
    Comparação Lexicográfica de Strings
    
    Ordenação de Strings:
    Em C++, quando você compara duas strings usando os operadores <, == ou >, a comparação é feita lexicograficamente. Isso significa que as strings são comparadas caractere a caractere, da esquerda para a direita, utilizando os valores numéricos dos caracteres (por exemplo, os códigos ASCII ou Unicode).

    Exemplo:
    Se você comparar "Alice" e "Bruno", o operador < verificará primeiro os caracteres 'A' e 'B'. Como 'A' (65) é menor que 'B' (66) na tabela ASCII, a comparação determinará que "Alice" é menor que "Bruno".
    */

    clock_t inicio = clock();

    int indice = buscaBinaria(nomes,chave);

    clock_t fim = clock();

    double duracao = double(fim - inicio)/CLOCKS_PER_SEC;

    cout << fixed << setprecision(6);
    //verificação se o elemento foi encontrado (indice != -1) e exbide o resultado

    if(indice != -1){
        cout << "busca binária: " << chave << " encontrada no indice " << indice;
    }else{
        cout << "busca binária: " << chave << " não encontrada" << endl;
    }

    //exibe o tempo de execução
    cout << "tempo: " << duracao << " segundos." << endl;

    return 0;
};