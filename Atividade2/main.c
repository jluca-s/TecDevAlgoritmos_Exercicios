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

int lerNumeroInt() {
    int numero;
    while (scanf("%d", &numero) != 1) {
        printf("Entrada inválida. Por favor, digite apenas números inteiros: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    return numero;
}

int main() {

    // Variáveis
    int numeroInt, count = 1, qtd;
    int hamburguer = 0, pizza = 0, batataFrita = 0, coxinha = 0;
    float nota1, nota2, numeroFloat, countFloat = 0;
    char caractere;

    // Cabeçalho
    limparTerminal();
    printf("Exercicio da Aula 3\n");
    printf("Técnicas e Desenvolvimento de Algoritmos\n");
    printf("Prof. Ricardo Dantas\n\n");
    printf("Aluno: João Lucas Gonçalves de Paiva Costa\n");
    printf("Email: joaolucasgc@icloud.com\n");
    printf("RGM: 36910945\n\n");

    proximaTarefa();

    // Categoria do nadador por idade com if
    printf("Este programa lê a idade de um nadador, e informa sua categoria utilizando if.\n\n");

    printf("Digite a idade: ");
    numeroInt = lerNumeroInt();
    
    if (numeroInt < 5) {
        printf("Categoria: Não possui categoria\n");
    }    
    if (numeroInt >= 5 && numeroInt <= 7) {
        printf("Categoria: Infantil A, %d anos.\n" , numeroInt);
    } 
    if (numeroInt >= 8 && numeroInt <= 10) {
        printf("Categoria: Infantil B, %d anos.\n" , numeroInt);
    }
    if (numeroInt >= 11 && numeroInt <= 13) {
        printf("Categoria: Juvenil A, %d anos.\n" , numeroInt);
    }
    if (numeroInt >= 14 && numeroInt <= 17) {
        printf("Categoria: Juvenil B, %d anos.\n" , numeroInt);
    }
    if (numeroInt >= 18) {
        printf("Categoria: Senior, %d anos.\n" , numeroInt);
    }

    proximaTarefa();

    // Categoria do nadador por idade com switch
    printf("Este programa lê a idade de um nadador e informa sua categoria utilizando switch case.\n\n");

    printf("Digite a idade: ");
    
    do {
        numeroInt = lerNumeroInt();
        if (numeroInt < 0) {
            printf("Idade inválida. Por favor, digite um número inteiro positivo: ");
        }
    } 
    while (numeroInt < 0);    

    switch (numeroInt) {
        case 0 ... 4:
            printf("\nCategoria: Muito jovem para participar\n");
            break;
        case 5 ... 7:
            printf("\nCategoria: Infantil A, %d anos.\n\n", numeroInt);
            break;
        case 8 ... 10:
            printf("\nCategoria: Infantil B, %d anos.\n\n", numeroInt);
            break;
        case 11 ... 13:
            printf("\nCategoria: Juvenil A, %d anos.\n\n", numeroInt);
            break;
        case 14 ... 17:
            printf("\nCategoria: Juvenil B, %d anos.\n\n", numeroInt);
            break;
        default:
            printf("\nCategoria: Senior, %d anos.\n\n", numeroInt);
            break;
    }

    proximaTarefa();

    // Ler um numero equivalente a um item de um cardápio e exibir a soma dos preços
    printf("Este programa lê um número equivalente a um item de um cardápio e exibe a soma dos preços.\n\n");

    do {
        do {
            printf("\nCardápio:\n\n");

            printf("1 - Hamburguer - R$ 10.00\n");
            printf("2 - Pizza - R$ 15.00\n");
            printf("3 - Batata Frita - R$ 5.50\n");
            printf("4 - Coxinha - R$ 3.50\n");

            printf("\nDigite o número do item: ");

            numeroInt = lerNumeroInt();

            do {
                printf("Digite a quantidade: ");
                qtd = lerNumeroInt();
                if (qtd < 1) {
                    printf("Quantidade inválida. Por favor, digite um número inteiro positivo!\n");
                }
            }
            while (qtd < 1);

            if (numeroInt < 1 || numeroInt > 4) {
                printf("Item inválido. Por favor, digite um número inteiro entre 1 e 4: ");
                limparTerminal();
            }
        }
        while (numeroInt < 1 || numeroInt > 4);

        switch (numeroInt) {
            case 1:
                countFloat += 10.00 * qtd;
                hamburguer += qtd;
                break;
            case 2:
                countFloat += 15.00 * qtd;
                pizza += qtd;
                break;
            case 3:
                countFloat += 5.50 * qtd;
                batataFrita += qtd;
                break;
            case 4:
                countFloat += 3.50 * qtd;
                coxinha += qtd;
                break;
        }

        printf("\nDeseja adicionar outro item? (s/n): ");
        caractere = getchar();
        while (getchar() != '\n');
        limparTerminal();
    }
    while (caractere == 's' || caractere == 'S');

    printf("Resumo do pedido:\n");
    
    if (hamburguer > 0) {
        printf("%d Hamburguer(es) - R$ %.2f\n", hamburguer, hamburguer * 10.00);
    }
    if (pizza > 0) {
        printf("%d Pizza(s) - R$ %.2f\n", pizza, pizza * 15.00);
    }
    if (batataFrita > 0) {
        printf("%d Batata Frita(s) - R$ %.2f\n", batataFrita, batataFrita * 5.50);
    }
    if (coxinha > 0) {
        printf("%d Coxinha(s) - R$ %.2f\n", coxinha, coxinha * 3.50);
    }
    
    printf("\nTotal: R$ %.2f\n\n", countFloat);

    proximaTarefa();

    // Ler um numero inteiro equivalente a um mes e exibir a quantidade de dias
    printf("Este programa lê um número inteiro equivalente a um mês e exibe a quantidade de dias.\n\n");

    printf("Meses do ano:\n\n");

    printf("1 - Janeiro\n");
    printf("2 - Fevereiro\n");
    printf("3 - Março\n");
    printf("4 - Abril\n");
    printf("5 - Maio\n");
    printf("6 - Junho\n");
    printf("7 - Julho\n");
    printf("8 - Agosto\n");
    printf("9 - Setembro\n");
    printf("10 - Outubro\n");
    printf("11 - Novembro\n");
    printf("12 - Dezembro\n");

    printf("\nDigite o número do mês: ");
    
    do {
        numeroInt = lerNumeroInt();
        if (numeroInt < 1 || numeroInt > 12) {
            printf("Mes invalido, digite um número inteiro entre 1 e 12: ");
        }
    }
    while (numeroInt < 1 || numeroInt > 12);

    switch (numeroInt) {
        case 1:
            printf("\nJaneiro tem 31 dias.\n");
            break;
        case 2:
            printf("\nFevereiro tem 28 dias.\n");
            break;
        case 3:
            printf("\nMarço tem 31 dias.\n");
            break;
        case 4:
            printf("\nAbril tem 30 dias.\n");
            break;
        case 5:
            printf("\nMaio tem 31 dias.\n");
            break;
        case 6:
            printf("\nJunho tem 30 dias.\n");
            break;
        case 7:
            printf("\nJulho tem 31 dias.\n");
            break;
        case 8:
            printf("\nAgosto tem 31 dias.\n");
            break;
        case 9:
            printf("\nSetembro tem 30 dias.\n");
            break;
        case 10:
            printf("\nOutubro tem 31 dias.\n");
            break;
        case 11:
            printf("\nNovembro tem 30 dias.\n");
            break;
        case 12:
            printf("\nDezembro tem 31 dias.\n");
            break;
    }

    proximaTarefa();

    // Escrever de 1 a 50 na tela com For, While e Do While
    printf("Escreve de 1 a 50 utilizando FOR\n");
    proximaTarefa();

    for (int i = 1; i <= 50; i++) {
        printf("%d\n ", i);
    }

    proximaTarefa();

    printf("Escreve de 1 a 50 utilizando WHILE\n");
    proximaTarefa();

    int i = 1;
    while (i <= 50) {
        printf("%d\n ", i);
        i++;
    }

    proximaTarefa();

    printf("Escreve de 1 a 50 utilizando DO WHILE\n");
    proximaTarefa();

    i = 1;
    do {
        printf("%d\n ", i);
        i++;
    }
    while (i <= 50);

    proximaTarefa();

    //Ler um numero e informar se é par ou impar
    printf("Este programa lê um número e informa se ele é par ou ímpar.\n\n");

    printf("Digite um número inteiro: ");

    numeroInt = lerNumeroInt();

    if (numeroInt % 2 == 0) {
        printf("\nO número %d é par.\n", numeroInt);
    } 
    else {
        printf("\nO número %d é ímpar.\n", numeroInt);
    }

    proximaTarefa();

    //Ler duas notas e calcular a média de uma quantidade de alunos 
    printf("Este programa lê duas notas e calcula a média de uma quantidade exata de alunos.\n\n");

    printf("Digite a quantidade de alunos: ");
    numeroInt = lerNumeroInt();

    for (int i = 1; i <= numeroInt; i++) {
        printf("\nAluno %d\n", i);
        printf("Digite a primeira nota: ");
        nota1 = lerNumeroFloat();
        printf("Digite a segunda nota: ");
        nota2 = lerNumeroFloat();
        printf("Média do aluno %d: %.2f\n", i, (nota1 + nota2) / 2);

        if ((nota1 + nota2) / 2 >= 6) {
            printf("Aluno aprovado.\n");
        }
        if ((nota1 + nota2) / 2 < 6 && (nota1 + nota2) / 2 >= 1) {
            printf("Aluno na final.\n");
        }
        if ((nota1 + nota2) / 2 < 1) {
            printf("Aluno reprovado.\n");
        }
    }

    proximaTarefa();

    // Ler duas notas e calcular a média de varios alunos
    printf("Este programa lê duas notas e calcula a média de vários alunos.\n\n");

    do {
        do {
            printf("Digite a primeira nota: ");
            nota1 = lerNumeroFloat();
            if (nota1 < 0 || nota1 > 10) {
                printf("Nota inválida. Por favor, digite um número entre 0 e 10: ");
            }
        }
        while (nota1 < 0 || nota1 > 10);        

        do {
            printf("Digite a segunda nota: ");
            nota2 = lerNumeroFloat();
            if (nota2 < 0 || nota2 > 10) {
                printf("Nota inválida. Por favor, digite um número entre 0 e 10: ");
            }
        }
        while (nota2 < 0 || nota2 > 10);

        printf("\nMédia do aluno %d: %.2f\n", count, (nota1 + nota2) / 2);
        if ((nota1 + nota2) / 2 >= 6) {
            printf("Aluno aprovado.\n");
        }
        if ((nota1 + nota2) / 2 < 6 && (nota1 + nota2) / 2 >= 1) {
            printf("Aluno na final.\n");
        }
        if ((nota1 + nota2) / 2 < 1) {
            printf("Aluno reprovado.\n");
        }

        count++;

        printf("\nDeseja calcular a média de outro aluno? (s/n): ");
        caractere = getchar();
    }
    while (caractere == 's' || caractere == 'S');

    // Fim do programa
    printf("Fim do programa.\n");
    printf("Tenha um bom dia!\n");
    while (getchar() != '\n');
}