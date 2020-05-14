#include <stdio.h>
#include <stdlib.h>

int main (void){
    int dia, diaret;
    int tempo = diaret - dia;
    float valor = ((tempo - 15) * 2.50);

    printf("Qual o dia da retirada do livro?: ");
    scanf("%d", &dia);

    printf("\n");

    printf("Qual o dia da entrega do livro?: ");
    scanf("%d", &diaret);

    if (tempo >= 15)
    {
        printf("O valor a ser pago e de %f", valor);
    }
    else
    {
        printf("Nao houve atraso na devolucao!");
    }
    
}