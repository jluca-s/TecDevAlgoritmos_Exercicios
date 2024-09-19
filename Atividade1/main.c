#include <stdio.h>
#include <stdlib.h>

void limparTerminal() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void proximaTarefa() {
    printf("Precione enter para prosseguir...\n");
    while (getchar() != '\n');
    limparTerminal();
}

float lerNumeroFloat() {
    float numero;
    while (scanf("%f", &numero) != 1) {
        printf("Entrada inválida. Por favor, digite apenas números: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    return numero;
}

int main() {

    float numero;
    float nota1, nota2;
    float temperaturaFahrenheit, temperaturaCelsius;
    float base, altura;
    char caractere;

    // Cabeçalho
    limparTerminal();
    printf("Exercicio da Aula 2\n");
    printf("Técnicas e Desenvolvimento de Algoritmos\n");
    printf("Prof. Ricardo Dantas\n\n");
    printf("Aluno: João Lucas Gonçalves de Paiva Costa\n");
    printf("Email: joaolucasgc@icloud.com\n");
    printf("RGM: 36910945\n\n");

    proximaTarefa();

    // Ler numero e exibir
    printf("Este programa lê um número inteiro e exibe na tela.\n\n");

    printf("Digite um número: ");
    numero = lerNumeroFloat();
    printf("O número digitado foi: %.2f\n\n", numero);

    proximaTarefa();

    // Ler caractere e exibir como caractere, inteiro e hexadecimal
    printf("Esse programa lê um caractere e exibe como caractere, inteiro e hexadecimal.\n\n");
    printf("Digite um caractere: ");

    scanf("%c", &caractere);
    while (getchar() != '\n');

    printf("O caractere digitado foi: %c\n", caractere);    
    printf("O caractere digitado tem o valor inteiro: %d\n", caractere);
    printf("O caractere digitado tem o valor hexadecimal: %x\n\n", caractere);

    proximaTarefa();

    // Ler duas notas e exibir a média aritmética
    printf("Este programa lê duas notas e exibe a média aritmética.\n\n");
    printf("Digite a primeira nota em inteiro ou decimal separado por '.': ");
    nota1 = lerNumeroFloat();

    printf("Digite a segunda nota em inteiro ou decimal separado por '.': ");
    nota2 = lerNumeroFloat();

    printf("A média aritmética das notas %.2f e %.2f é: %.2f\n\n", nota1, nota2, (nota1 + nota2) / 2);

    proximaTarefa();

    // Ler temperatura em Fahrenheit e exibir em Celsius
    printf("Este programa lê uma temperatura em graus Fahrenheit e exibe em graus Celsius.\n\n");
    printf("Digite a temperatura em Fahrenheit: ");
    temperaturaFahrenheit = lerNumeroFloat();

    temperaturaCelsius = (temperaturaFahrenheit - 32) * 5 / 9;
    printf("A temperatura %.2f°F é equivalente a %.2f°C\n\n", temperaturaFahrenheit, temperaturaCelsius);

    proximaTarefa();

    // Ler base e altura de um triângulo e exibir a área
    printf("Este programa lê a altura e a base de um triângulo e exibe a sua área.\n\n");
    printf("Digite a base do triângulo: ");
    base = lerNumeroFloat();

    printf("Digite a altura do triângulo: ");
    altura = lerNumeroFloat();

    printf("A área do triângulo com base %.2f e altura %.2f é: %.2f\n\n", base, altura, (base * altura) / 2);

    proximaTarefa();

    // Fim do programa
    printf("Fim do programa.\n");
    printf("Tenha um bom dia!\n");
    while (getchar() != '\n');
}