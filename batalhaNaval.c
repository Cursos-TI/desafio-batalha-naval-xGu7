#include <stdio.h>
#include <stdlib.h>

int main () {
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    //nivel novato:
    //feito!!!

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    int opcao;
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0, 0, 0 ,0 ,0 ,0 ,0}
    };

    //variavel cone
    int linhacone = 1;
    int centro = 2;

    //desenha o cone
    for(int i=0; i < 3; i++){
        for(int j = -i; j <= i; j++){
        tabuleiro [linhacone + i][centro +j] = 1;
    }}

    //variaveil cruz
    int linhacruz = 2;
    int colunacruz = 7;
    
    //desenha a cruz
    for(int i = - 2; i <= 2; i++){
        tabuleiro[linhacruz + i][colunacruz] = 2;
    } for (int j = -2; j <= 2; j++) {
        tabuleiro[linhacruz][colunacruz + j] = 2;
    }
    //variavel octaedro
    int linhaocta = 7;
    int colunaocta = 4;

    //desenha o octaedro
    for(int i = 0; i < 3; i++){
        for(int j = -1; j <= 1; j++){
            if(i == 1 || j == 0){
                tabuleiro[linhaocta + i][colunaocta + j] = 4;
            }
        }
    }
    
    printf("Menu:\n1. Jogar\n2. Regras\n3. Sair\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1: {
        // variavies e posicionamento do navio
        int linha, direcao, valido = 1;
        char letra;
        int coluna;

        printf("Digite a linha (1 a 10) para posicionar a primeira parte do navio: ");
        scanf("%d", &linha);
        linha--;

        printf("Digite a coluna (A a J, letra maiuscula): ");
        scanf(" %c", &letra);
        coluna = letra - 'A';

        printf("Escolha a direção do navio (1-horizontal, 2-vertical, 3-diagonal direita, 4-diagonal esquerda): ");
        scanf("%d", &direcao);

        switch (direcao)
        {
        case 1:
        //codigo horizontal
            if(linha<7 && coluna<7){
                for(int i = 0; i < 3; i++){
                    tabuleiro[linha + i][coluna] = 3;
                }
            }else{
                printf("O navio nao cabe nessa posição!");
            }
            break;
        //codigo vertical
        case 2:
            if(linha<7 && coluna<7){
                for(int i = 0; i < 3; i++){
                    tabuleiro[linha][coluna + i] = 3;
                }
            }else{
                printf("O navio nao cabe nessa posição!");
                exit(0);
            }
            break;
        //codigo diagonal direita
        case 3:
            if(linha<7 && coluna<7){
                for (int i = 0; i < 3; i++) {
                tabuleiro[linha + i][coluna +i]=3;
                }}else{
                    printf("O navio nao cabe nessa posição!");
                    exit(0);
                }
            break;
        //codigo diagonal esquerda
        case 4:
            if(linha<7 && coluna<7){
                for (int i = 0; i < 3; i++) {
                tabuleiro[linha + i][coluna -i]=3;
                }}else{
                    printf("O navio nao cabe nessa posição!");
                    exit(0);
                }
            break;
        
        default:
            printf("Opcao invalida!");
            break;
        }
        //imprimindo o tabuleiro
        printf("\n   TABULEIRO BATALHA NAVAL\n");
        printf("    A B C D E F G H I J\n");

        for (int i = 0; i < 10; i++) {
            if (i < 9)
                printf(" %d. ", i + 1);
            else
                printf("%d. ", i + 1);

            for (int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        break;
    }

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
