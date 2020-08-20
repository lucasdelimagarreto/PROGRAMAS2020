#include <stdio.h>
#include <stdlib.h>
#define AUX 15

void main (){

    int linha, coluna, aux = 14;

    for (linha = 0; linha < AUX; linha++){

        for (coluna = 0; coluna < AUX; coluna++){

            if (linha == coluna || linha + coluna == 14){

                printf("**");
            
            }

            else{

                printf("  ");
            
            }
            aux--;
        }

        printf("\n");
    
    }


}