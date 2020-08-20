#include <stdio.h>
#include <stdlib.h>
#define AUX 20

void main (){

    int linha, coluna;

    for (linha = 0; linha < AUX; linha++){

        for (coluna = 0; coluna < AUX; coluna++){

            if (linha == coluna){

                printf("**");
            
            }

            else{

                printf("   ");
            
            }
        }

        printf("\n");
    
    }
}