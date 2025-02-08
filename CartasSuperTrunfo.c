#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado; // Declaração da variável estado com 1 caractere
    char codigo_cidade[3]; // Declaração da variável código da cidade com 2 caractere + o null terminator('\0').
    char nome_cidade[20]; // Declaração da variável nome da cidade com 19 caractere + o null terminator('\0').
    int populacao; // Declaração da variável população do tipo inteiro.
    float area; // Declaração da variável área do tipo float.
    float pib; // Declaração da variável PIB do tipo float.
    int quantidade_pontos_turisticos; // Declaração da variável número de pontos turistícos do tipo inteiro.

    printf("Jogo de cartas Super Trunfo!! \n\n"); // imprime no terminal a frase 'Jogo de cartas Super Trunfo!!' e depois salta duas linhas.

    printf("Digite a inicial do Estado: \n"); // imprime no terminal a frase 'Digite a inicial do Estado:' e depois salta uma linha.
    scanf("%c", &estado); // Coleta o cacactere inserido no terminal e armazena na variável estado.

    printf("Digite o código da cidade: \n"); // imprime no terminal a frase 'Digite o código da cidade:' e depois salta uma linha.
    scanf("%2s", codigo_cidade); // Coleta os cacacteres inserido no terminal e armazena na variável codigo_cidade.

    printf("Digite o nome da cidade: \n"); // imprime no terminal a frase 'Digite o nome da cidade:' e depois salta uma linha.
    scanf(" %[^\n]", nome_cidade); // Coleta a frase inserida no terminal e armazena na variável nome_cidade.

    printf("Digite a quantidade populacional da cidade: \n"); // imprime no terminal a frase 'Digite a quantidade populacional da cidade:' e depois salta 1 linha.
    scanf("%d", &populacao); // Coleta os digitos inserido no terminal e armazena na variável populacao.

    printf("Digite a área da cidade: \n"); // imprime no terminal a frase 'Digite a área da cidade:' e depois salta uma linha.
    scanf("%f", &area); // Coleta os digitos inserido no terminal e armazena na variável area.

    printf("Digite o PIB da cidade: \n"); // imprime no terminal a frase 'Digite o PIB da cidade:' e depois salta uma linha.
    scanf("%f", &pib); // Coleta os digitos inserido no terminal e armazena na variável pib.

    printf("Digite a quantidade de pontos turísticos da cidade: \n"); // imprime no terminal a frase 'Digite a quantidade de pontos turísticos da cidade:' e depois salta uma linha.
    scanf("%d", &quantidade_pontos_turisticos); // Coleta os digitos inserido no terminal e armazena na variável quantidade_pontos_turisticos.

    printf("Estado: %c \n", estado); // Imprime no terminal o caractere armazenado na variável estado, depois salta uma linha.

    printf("Código da Carta: %c%s \n", estado, codigo_cidade); // Imprime no terminal os caracteres armazenados na variável codigo_cidade, depois salta uma linha.

    printf("Nome da Cidade: %s \n", nome_cidade); // Imprime no terminal os caracteres armazenados na variável nome_cidade, depois salta uma linha.

    printf("População: %d \n", populacao); // Imprime no terminal os dígitos armazenados na variável população, depois salta uma linha.
    
    printf("Área: %.2f Km² \n", area); // Imprime no terminal os dígitos armazenados na variável área, com dois dígitos após a vírgula ou ponto, depois salta uma linha.

    printf("PIB: %.2f bilhões de reais \n", pib); // Imprime no terminal os dígitos armazenados na variável pib, com dois dígitos após a vírgula ou ponto, depois salta uma linha.

    printf("Núnero de Pontos Turísticos: %d \n", quantidade_pontos_turisticos); // Imprime no terminal os dígitos armazenados na variável quantidade_pontos_turisticos, depois salta uma linha.

    return 0;
}
