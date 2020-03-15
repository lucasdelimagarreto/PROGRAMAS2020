#include <stdio.h>
#include <stdlib.h>

int main (void){
    int senha, resp;
    int var = 5;

    printf("Digite a senha: ");
    scanf("%d", &senha);
    system("cls");

    while (var > 0)
    {
        printf("\nDigite a senha: ");
        scanf("%d", &resp);
        printf("\nvoce possui %d chances", var);

        if (resp == senha){
            printf("\nAcertou!!!");
        }
        else if (resp + 1 == senha || resp - 1 == senha)
        {
            printf("Ta quente!!!");
            var -= 1;
        }
        
        else
        {
            var -= 1;
            printf("\nsua chance diminuiu, e de %d agora", var);

        }

    }
    
    return 0;

}