#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    //nivel novato:
int main () {

    // Variáveis:
    int opcao;

    // Matriz do tabuleiro:
    int tabuleiro [10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 3, 3, 3 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 3, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 3, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 3, 0, 0, 0, 0 ,0 ,0 ,0 ,0}
    };

    // Menu:
    printf("Menu:\n1. Jogar\n2. Regras\n3. Sair\n");
    scanf("%d", &opcao);

    // Menu usando switch
    switch (opcao)
    {
    case 1:
        // Imprimir tabuleiro com for
        printf("   TABULEIRO BATALHA NAVAL\n");
        printf("    A B C D E F G H I J\n");
        // Linhas
        for (int i = 0; i < 10; i++) {
            if (i < 9)
                printf(" %d. ", i + 1);
            else
                printf("%d. ", i + 1);
        //Colunas
            for (int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        break;

    case 2:
        printf("Regras...\n");
        break;

    case 3:
        printf("Voce saiu do jogo!\n");
        break;

    default:
        printf("Opcao invalida, tente novamente!\n");
        break;
    }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
