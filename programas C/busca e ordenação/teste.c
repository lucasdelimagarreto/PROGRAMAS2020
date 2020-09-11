#include <stdio.h>
#include <stdlib.h>

void main (){

    printf("Busca Linear\n");

    int numeros[5] = {50,20,10,70,15};

    int i, valor;

    printf("Qual e o valor a procurar?\n");
    scanf("%d", &valor);

    for (i = 0; i < 5; i++)
    {
        if (numeros[i] == valor)
        {
            printf("valor encontrado!");
            exit(1);
        }
        
    }
    printf("Valor não encontrado");
    
}