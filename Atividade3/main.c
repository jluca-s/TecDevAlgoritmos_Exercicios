#include <stdio.h>

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

int lerNumeroInt() {
    int numero;
    while (scanf("%d", &numero) != 1) {
        printf("Entrada inválida. Por favor, digite apenas números inteiros: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    return numero;
}
 
float perimetroRetangulo(float base, float altura) {
    return 2 * (base + altura);
}

int isAprovado(float nota1, float nota2, float nota3) {
    float media = (nota1 + nota2 + nota3) / 3;
    return media >= 7;
}

float velocidadeMedia(float distancia, float tempo) {
    return distancia / tempo;
}

float valorTotalProduto(float preco, int quantidade) {
    return preco * quantidade;
}

void horaToTexto(int hora, int minuto, int segundo) {
    printf("%dh %dmin %ds\n", hora, minuto, segundo);
}

void menu() {
    printf("1 - Perimetro Retangulo\n");
    printf("2 - Aprovado\n");
    printf("3 - Velocidade Media\n");
    printf("4 - Valor Total Produto\n");
    printf("5 - Hora To Texto\n");
    printf("6 - Sair\n");
}

int main() {
    limparTerminal();

    int opcao;
    
    menu();

    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    while(opcao != 6) {
        switch(opcao) {
            case 1: {
                float base, altura;
                printf("Digite a base do retangulo: ");
                base = lerNumeroFloat();
                printf("Digite a altura do retangulo: ");
                altura = lerNumeroFloat();
                printf("\n\nPerimetro do retangulo: %.2f\n\n", perimetroRetangulo(base, altura));
                break;
            }
            case 2: {
                float nota1, nota2, nota3;
                printf("Digite a primeira nota: ");
                nota1 = lerNumeroFloat();
                printf("Digite a segunda nota: ");
                nota2 = lerNumeroFloat();
                printf("Digite a terceira nota: ");
                nota3 = lerNumeroFloat();
                if (isAprovado(nota1, nota2, nota3)) {
                    printf("Aprovado, nota: %f\n", (nota1 + nota2 + nota3) / 3);
                } else {
                    printf("Reprovado, nota: %.2f\n", (nota1 + nota2 + nota3) / 3);
                }
                break;
            }
            case 3: {
                //todo: receber tempo em minutos e converter para horas!!!
                float distancia, tempo;
                printf("Digite a distancia percorrida: ");
                distancia = lerNumeroFloat();
                printf("Digite o tempo gasto em minutos: ");
                tempo = lerNumeroFloat();
                printf("Velocidade media: %.2f\n", velocidadeMedia(distancia, tempo));
                break;
            }
            case 4: {
                float preco;
                int quantidade;
                printf("Digite o preco do produto: ");
                preco = lerNumeroFloat();
                printf("Digite a quantidade de produtos: ");
                quantidade = lerNumeroInt();
                printf("Valor total do produto: %.2f\n", valorTotalProduto(preco, quantidade));
                break;
            }
            case 5: {
                int hora, minuto, segundo;
                printf("Digite a hora: ");
                hora = lerNumeroInt();
                printf("Digite o minuto: ");
                minuto = lerNumeroInt();
                printf("Digite o segundo: ");
                segundo = lerNumeroInt();
                horaToTexto(hora, minuto, segundo);
                break;
            }
            default:
                printf("Opcao invalida\n");
        }
        proximaTarefa();
        menu();
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
    }

}