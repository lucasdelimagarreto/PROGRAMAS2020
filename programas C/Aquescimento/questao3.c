#include <stdio.h>
#include <stdlib.h>

int main (){

    int repet, val1, val2, var, cont;

    printf("Digite a quantidade de números que deseja: ");
    scanf("%d", &repet);

    for (val1 = 1; val1 <= repet; val1++){

        for (val2 = 1; val2 <= repet; val2++){

            if (val1 % val2 == 0){

                cont++;
            }
            
        }
        if (cont == 2){

            printf("%d, ", val1);
        }
        
        cont = 0;
        
    }
    
        
    return 0;
}