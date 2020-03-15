#include <stdio.h>
#include <stdlib.h>

float calcular_media_ponderada(float nota1,float nota2, int peso1, int peso2) {
    float media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
    return media;
}

int main ()
{
    int peso1, peso2, matricula;
    float nota1, nota2;
    printf("Digite o peso da Nota 1: ");
    scanf("%d",&peso1);
    
    printf("Digite o peso da Nota 2: ");
    scanf("%d",&peso2);
    
    printf("Digite a sua Matricula: ");
    scanf("%d",&matricula);

    printf("Digite a Nota 1: ");
    scanf("%f",&nota1);

    printf("Digite a Nota 2: ");
    scanf("%f",&nota2);

    float resul = calcular_media_ponderada(nota1,nota2,peso1,peso2);

    system("cls");

    printf("Sua media e %f",resul);
    printf("\n");
    printf("A sua matricula e: %d", matricula);


    return 0;
}