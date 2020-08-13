#include <stdio.h>
#include <stdlib.h>

int main (){

    int matriz[10][3], aux = 0, aux2 = 0, linha1 = 0, linha2 = 0;

    while (aux != -1){

        printf("Digite os valores que serão adicionados na matriz: ");
        scanf("%d", &aux);

        if (aux == -1){

            aux = 0;
        }

        if (aux % 2 == 1){

            matriz[linha1][0] = aux;
            linha1++;
            
        }

        else{
            
            matriz[linha2][2] = aux;
            linha2++;

        }
        
    } 

    return 0;
}