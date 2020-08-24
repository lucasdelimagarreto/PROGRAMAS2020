#include <stdio.h>
#include <stdlib.h>
#define AUX 15

void main (){

    int linha, coluna, aux2 = 1, matriz[AUX][AUX];

    char aux = '*';
    
    for (int i = 0; i < AUX; i++){

        for (int j = 0; j < AUX; j++){

            printf("\n%c", aux * aux2);

            aux2++;
            
        }
    }
}