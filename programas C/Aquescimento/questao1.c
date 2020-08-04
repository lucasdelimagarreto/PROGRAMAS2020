#include <stdio.h>
#include <stdlib.h>

int main (){

    int var;
    printf("Digite o numero: ");
    scanf("%d", &var);

    if (var%2 == 1){
        printf("numero é primo!");
    }
    else{
        printf("O número não é primo!");
    }
    return 0;
}
