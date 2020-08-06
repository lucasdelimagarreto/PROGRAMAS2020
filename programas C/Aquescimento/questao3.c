#include <stdio.h>
#include <stdlib.h>

int main (){

    int quant, cont, numero, i;
    int var = 0;

    printf("Digite a quantidade de numeros primos!");
    scanf("%d", &quant);

    for (size_t numero = 1; numero < quant; numero++){

        for (size_t cont = 1; cont <= quant * 5; cont++)
        {
            if (cont % numero == 0)
            {
                var++;
            } 
        }
        if (var <= 2)
        {
            printf("%d", cont);
        }
        
    }

    return 0;
}