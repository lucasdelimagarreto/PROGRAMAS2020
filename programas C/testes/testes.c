#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main (){

    int valor, aux;

    srand(time(NULL));
    
    aux = rand();

    printf("Digite um número: \n");
    scanf("%d", &valor);

    while (aux != valor || valor != 0){

        printf("Você errou tente de novo: \n");
        
        scanf("%d", valor);
        
    }
    if (valor == 0){

        printf("Voce desistiu!");
    
    }
    else
    {
        printf("Voce acertou!");
    }

    return 0;
}