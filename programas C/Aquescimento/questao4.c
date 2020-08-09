#include <stdio.h>
#include <stdlib.h>

int main (){

    int vet[10], i = 0, aux, aux2, aux3, valor, anterior, posterior;

    printf("Digite os números que comporão o vetor: ");

    for (i = 0; i < 10; i++){

        scanf("%d", &vet[i]);

        aux = vet[i];
        

        if (aux <= vet[i]){
            
            valor = aux;
            aux2 = i;
            anterior = vet[i - 1];
            posterior = vet[i + 1];

        }
    }
    
    printf("O menor valor e %d, na posição %d, o valor anterior é %d,  e o posterior é %d.", valor, aux2, anterior, posterior);
    
    return 0;
}