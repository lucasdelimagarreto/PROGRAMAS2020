#include <stdio.h>
#include <stdlib.h>

int main (){

    int vet[10], i = 0, aux2 = 0, valor;

    printf("Digite os números que comporão o vetor: ");
    scanf("%d", &vet[0]);
    valor = vet[0];

    for (i = 1; i < 10; i++){
        printf("Digite os números que comporão o vetor: ");
        scanf("%d", &vet[i]);

        if (vet[i] < valor){

            valor = vet[i];
            aux2 = i;

        }

    }
    if (aux2 == 0){

        printf("\nMenor valor recebido: %d", valor);
        printf("\nIndice do menor valor: %d", aux2);
        printf("\nValor armazenado na posição posterior: %d", vet[aux2 + 1]);

    }
    else if (aux2 == 9){

        printf("\nMenor valor recebido: %d", valor);
        printf("\nIndice do menor valor: %d", aux2);
        printf("\nValor armazenado na posição anterior: %d", vet[aux2 - 1]);

    }
    else{

        printf("\nMenor valor recebido: %d", valor);
        printf("\nIndice do menor valor: %d", aux2);
        printf("\nValor armazenado na posição anterior: %d", vet[aux2 - 1]);
        printf("\nValor armazenado na posição posterior: %d", vet[aux2 + 1]);
    }

    return 0;
}