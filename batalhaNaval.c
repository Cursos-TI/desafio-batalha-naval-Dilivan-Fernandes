#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).

      // Definição da matriz do tabuleiro iniciando com os números 0.
      int tabuleiro[10][10]={
        { 0,0,0,0,0,0,0,0,0,0},
        { 0,0,0,0,0,0,0,0,0,0},
        { 0,0,0,0,0,0,0,0,0,0},
        { 0,0,0,0,0,0,0,0,0,0},
        { 0,0,0,0,0,0,0,0,0,0},
        { 0,0,0,0,0,0,0,0,0,0},
        { 0,0,0,0,0,0,0,0,0,0},
        { 0,0,0,0,0,0,0,0,0,0},
        { 0,0,0,0,0,0,0,0,0,0},
        { 0,0,0,0,0,0,0,0,0,0}
    };

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.

     // Texto para o layout.
     printf("\n********  JOGO DE BATALHA NAVAL *************\n\n");

     // Letras das colunas.
     printf(" A B C D E F G H I J \n");
 
     // Variável com o número 3 para representar os navios.
     int navio=3;
 
     // Posicionar o 1º navio na horizontal
     for(int i= 1; i <4; i++){
       tabuleiro[2][i]= navio;
     }
 
     // Posicionar o 2º navio na vertical
     for(int j= 5; j < 8; j++){
         tabuleiro[j][7]= navio;
     }

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

      // Inicialização do tabuleiro já com os navios posicionados.
      for(int linha =0; linha<10; linha++){
        for(int coluna =0; coluna<10;coluna++){
            printf(" %d",tabuleiro[linha][coluna]);
        }
        printf("\n");
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
