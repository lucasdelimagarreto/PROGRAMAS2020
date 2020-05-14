#include <stdio.h>
#include <stdlib.h>

int main (void){

    int val1, val2, operador;


    printf("DIga o primeiro valor: ");
    scanf("%d", &val1);

    printf("DIga o segundo valor: ");
    scanf("%d", &val2);

    printf("Digite 1 para adição!\n");
    printf("Digite 2 para subtração!\n");
    printf("Digite 3 para multiplicação!\n");
    printf("Digite 4 para divisão!\n");
    scanf("%d", &operador);

    if(operador == 1){
        printf("o resultado e %d", (val1 + val2));
    }
    else if (operador == 2)
    {
        printf("o resultado e %d", (val1 - val2));
    }
    else if (operador == 3)
    {
        printf("o resultado e %d", (val1 * val2));
    }
    else
    {
        printf("o resultado e %d", (val1 / val2));
    }

    
}