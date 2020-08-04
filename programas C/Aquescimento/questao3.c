#include <stdio.h>
#include <stdlib.h>

int main (){

    int quant, cont, i;
    int var = 0;

    printf("Digite a quantidade de numeros primos!");
    scanf("%d", &quant);

    for (size_t i = 2; i < quant + 1; i++){
        
        var = var + 1;

        if(var % i == 0){
            
            printf("\n%d", var);

        }

    }
    
    return 0;
}