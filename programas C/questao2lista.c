#include <stdio.h>
#include <stdlib.h>

int main(void){
    float salario;
    float inss, fgts;
    int psaude = 100;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    
    fgts = (salario / 100) * 8;

    inss = (salario / 100) * 10;

    salario -= fgts + inss;

    system("cls");

    printf("O salario e de R$%f, o desconto do INSS e de R$%f, o desconto do FGTS e de R$%f", salario, inss, fgts);
    printf("\n");
    printf("O valor do plano de saude e de R$100.00");
    printf("\n");
    printf("o valor do salario com asreducoes e de R$%f", salario);

    return 0;

}