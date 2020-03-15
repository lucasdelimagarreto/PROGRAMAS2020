#include <stdio.h>
#include <stdlib.h>

int main (void){
    float p1, p2, p3;

    printf("digite a nota da primeira prova: ");
    scanf("%f", &p1);
    printf("\n");
    printf("Digite a nota da segunda prova: ");
    scanf("%f",  &p2);

    system("cls");
    
    if((p1 + p2)/2 >= 5 && p1 > 3 && p2 > 3){
        printf("Aluno aprovado!");
    }
    else
    {
        printf("Digite a nota da terceira prova: ");
        scanf("%f", &p3);
        system("cls");

        if(p1 > p2){
            if (p1 + p3 >= 5){
                printf("Aluno aprovado!");
            }
            else
            {
                printf("Aluno reprovado!");
            }
        }
        else
        {
            if (p2 + p3 >= 5){
                printf("Aluno aprovado!");
            }
            else
            {
                printf("Aluno reprovado!");
            }
        }
    }
    return 0;
}