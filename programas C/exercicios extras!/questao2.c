#include <stdio.h>
#include <stdlib.h>

void main (){

    float x, y, potX = 1, potY = 1, aux = 1, funcao1, funcao2, result;

    printf("Calculo da equação: f(x, y) = (x4 +3xy+y3 )/(2xy+3x+4y+2)");
    printf("\nDigite o valor de X: ");
    scanf("%f", &x);
    printf("\nDigite o valor de Y: ");
    scanf("%f", &y);

    do{

        //potenciação de X
        potX = potX *  x;
        aux++;

    } while (aux != 5);

    printf("\npotencia X: %.2f", potX);

    aux = 1;

    do{

        //potenciação de Y
        potY = potY *  y;
        aux++;

    } while (aux != 4);

    printf("\npotencia Y: %.2f", potY);

    //Calculo da equação principal
    
    funcao1 = ((potX) + (3 * x * y) + (potY));
    funcao2 = ((2 * x * y) + (3 * x) + (4 * y) + 2);

    result = (funcao1/funcao2);

    system("cls");

    printf("\nO resultado é: %.2f", result);

}