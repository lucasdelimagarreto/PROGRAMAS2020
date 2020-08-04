#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero, quant, var;

    printf("Digite o numero:");
    scanf("%d", &numero);

    for (size_t quant = 1; quant <= numero * 5; quant++){

        if ((numero%quant) == 0)
        {
            var++;
        }
        
    }
    if (var > 2)
    {
        printf("Não e primo!");
    }
    else
    {
        printf("E primo!");
    }
    return 0;
    
}
