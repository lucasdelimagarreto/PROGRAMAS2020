#include <stdio.h>
#include <stdlib.h>

void main (){

    int num, num2 = 0, result = 0;

    printf("Digite um número para saber sua tabuada: ");
    scanf("%d", &num);

    while (num2 < 11){

        result = num * num2;

        printf("\n%d x %d = %d", num, num2, result);
        num2++;

    }
}