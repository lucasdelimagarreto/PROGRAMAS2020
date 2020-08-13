#include <stdio.h>
#include <stdlib.h>

int main (){

    int matriz[3][3], i, j, aux;

    for ( i = 0; i < 3; i++){
        
        for ( j = 0; j < 3; j++){

            printf("Digite o numero da linha %d e coluna %d: ", i, j);
            scanf("%d", &aux);
            matriz[i][j] = aux;
            
        }
    }

    for ( i = 0; i < 3; i++){

        for ( j = 0; j < 3; j++){

            printf("%d ", matriz[i][j]);
        }
        
        printf("\n");
    }

    printf("\n*********************************\n\n");

    for (i = 0; i < 3; i++){

        for (j = 0; j < 3; j++){

            if (i > j){

                aux = matriz[i][j];
                matriz[i][j] = matriz[j][i];
                matriz[j][i] = aux;

            }
            
        }
        
    }

    for ( i = 0; i < 3; i++){

        for ( j = 0; j < 3; j++){

            printf("%d ", matriz[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}