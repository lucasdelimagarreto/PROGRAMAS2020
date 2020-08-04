#include <stdio.h>
#include <stdlib.h>

int main (){

    int quantidade, prox;
    int anter = 1;
    int atual = 1;
    int cont = 2;

    printf("Quantos numeros da sequencia deseja?");
    scanf("%d", &quantidade);

    printf("1 1");
    while (cont < quantidade){
        prox = anter + atual;
        anter = atual;
        atual = prox;
        cont = cont + 1;
        printf(" %d",prox);
    }
    return 0;
}