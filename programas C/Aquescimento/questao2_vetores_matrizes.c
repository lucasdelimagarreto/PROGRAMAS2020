#include <stdio.h>
#include <stdlib.h>

int main (){

    //Construa um programa que receberá valores inteiros em quantidade suficiente para montar uma matriz 5x5.
    // Em seguida, o algoritmo deverá escrever a matriz na ordem em que foi montada 
    //(da esquerda para direita, de cima para baixo).
    // Ao final, acrescente uma linha em branco e, então, faça a impressão da matriz transposta correspondente.

    int matriz[3][3];

    for (int i = 0; i < 3; i++){
        
        for (int j = 0; j < 3; j++){

            printf("Digite o numero da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

        }
    }
    
    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){

            printf("%d ", &matriz[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}