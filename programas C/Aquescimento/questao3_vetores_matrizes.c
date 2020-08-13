#include <stdio.h>
#include <stdlib.h>

int main (){

    int matriz[10][3], aux = 0, aux2 = 0, linha1 = 0, linha2 = 0, linha3 = 0, contE = 0, contD = 0;

    while (aux != -1){

        printf("Digite os valores que serão adicionados na matriz: ");
        scanf("%d", &aux);

        if (contE == 9 || contD ==9){
            
            matriz[linha2][1] = aux;
            linha2++;
        
        }
        
        else{

            if (aux % 2 == 1){

                matriz[linha1][0] = aux;
                linha1++;
                contE++;
            
            }

            else{
            
                matriz[linha3][2] = aux;
                linha3++;
                contD++;

            }
        
        }
        
    } 

    return 0;
}