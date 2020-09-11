#include <stdio.h>
#include <stdlib.h>

void fucao(int *a, int *b){

    int c;

    c = *a;
    *a = *b;
    *b = c;
    
    printf("o novo valor de A e %d\n", *a);
    printf("o novo valor de B e %d", *b);
}

int main (){

    int var1, var2, var3;

    printf("Diga os valores de A e B respectivamente:\n");
    scanf("%d%d", &var1, &var2);

    fucao(&var1, &var2);

}
