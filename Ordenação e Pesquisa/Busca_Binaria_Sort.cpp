/*
Busca Binária
*/

#include <iostream>     // Biblioteca para entrada e saída (cout, cin)
#include <vector>       // Biblioteca para usar o container vector
#include <string>       // Biblioteca para manipular strings em C++
#include <algorithm>    // Biblioteca para usar funções como sort()
#include <ctime>        // Biblioteca para medir o tempo com clock() e CLOCKS_PER_SEC
#include <iomanip>      // Biblioteca para formatar a saída (fixed, setprecision)r

using namespace std;    // Permite usar nomes do std sem precisar do prefixo "std::"

// Função de Busca Binária
// Observação: Pressupõe que o vetor 'nomes' esteja ordenado.
// A função procura pela 'chave' utilizando o método de divisão e conquista.
// Retorna o índice onde o elemento é encontrado ou -1 se não for encontrado.
int buscaBinaria(const vector<string>& nomes, const string& chave) {
    int inicio = 0;  // Índice inicial do intervalo de busca
    // Converte o tamanho do vetor para int e define o índice final (último elemento)
    int fim = static_cast<int>(nomes.size()) - 1;
    
    // Enquanto o intervalo for válido (inicio <= fim), continue a busca
    while (inicio <= fim) {
        // Calcula o índice do elemento do meio do intervalo
        int meio = inicio + (fim - inicio) / 2;
        
        // Se o elemento do meio for igual à chave, retorna o índice do meio
        if (nomes[meio] == chave)
            return meio;
        // Se o elemento do meio for menor que a chave,
        // então a chave, se existir, estará na metade superior do vetor
        else if (nomes[meio] < chave)
            inicio = meio + 1;
        // Caso contrário, a chave estará na metade inferior
        else
            fim = meio - 1;
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    // Cria um array de ponteiros para const char com os nomes.
    // Cada elemento do array é um ponteiro para uma string literal.
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

    // Calcula o número de elementos do array.
    // sizeof(arr) retorna o tamanho total do array em bytes.
    // sizeof(arr[0]) retorna o tamanho de um único elemento (neste caso, um ponteiro para char).
    // Dividindo esses valores, obtemos o número total de elementos no array.
    int n = sizeof(arr) / sizeof(arr[0]);

    // Preenche o vector 'nomes' utilizando os elementos do array.
    // O construtor vector<string>(arr, arr + n) copia os elementos do intervalo [arr, arr + n)
    // para dentro do vector, facilitando o uso das funcionalidades da STL.
    vector<string> nomes(arr, arr + n);

    // Ordena o vector 'nomes' para que a busca binária funcione corretamente,
    // pois este algoritmo requer que os dados estejam ordenados.
    sort(nomes.begin(), nomes.end());

    // Solicita ao usuário o nome completo a ser procurado.
    string chave;
    cout << "Busca Binária - Digite o nome completo a ser procurado: ";
    getline(cin, chave);  // Lê a linha inteira, permitindo espaços

    /*
    Comparação Lexicográfica de Strings
    
    Ordenação de Strings:
    Em C++, quando você compara duas strings usando os operadores <, == ou >, a comparação é feita lexicograficamente. Isso significa que as strings são comparadas caractere a caractere, da esquerda para a direita, utilizando os valores numéricos dos caracteres (por exemplo, os códigos ASCII ou Unicode).

    Exemplo:
    Se você comparar "Alice" e "Bruno", o operador < verificará primeiro os caracteres 'A' e 'B'. Como 'A' (65) é menor que 'B' (66) na tabela ASCII, a comparação determinará que "Alice" é menor que "Bruno".
    */

    // Inicia a medição do tempo antes de chamar a função de busca binária.
    clock_t inicio = clock();
    // Chama a função buscaBinaria para procurar a 'chave' no vector 'nomes'
    int indice = buscaBinaria(nomes, chave);
    // Captura o tempo após a execução da busca
    clock_t fim = clock();
    // Calcula a duração da busca em segundos (converte de ticks para segundos)
    double duracao = double(fim - inicio) / CLOCKS_PER_SEC;

    // Configura a saída para exibir números em notação fixa com 6 casas decimais.
    cout << fixed << setprecision(6);
    // Verifica se o elemento foi encontrado (índice diferente de -1) e exibe o resultado
    if (indice != -1)
        cout << "Busca Binária: '" << chave << "' encontrado no índice " << indice;
    else
        cout << "Busca Binária: '" << chave << "' não encontrado.";
    // Exibe o tempo de execução da busca
    cout << " Tempo: " << duracao << " segundos.\n";

    return 0; // Indica que o programa terminou com sucesso
}