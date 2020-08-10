#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main (){
    
    int valor, aux;

    srand(time(NULL));
    
    aux = rand() % 10;

    printf("Digite um número: ");
    scanf("%d", &valor);

    while (aux != valor || valor != 0){

        printf("O valor e: %d \n", aux);

        printf("Você errou tente de novo: ");
        
        scanf("%d", &valor);
        
        if (valor == 0){

            printf("Voce desistiu!");
            break;
        
        }
        else if (valor == aux){

            printf("Voce acertou!");
            break;
            
        }
    }
    return 0;
}