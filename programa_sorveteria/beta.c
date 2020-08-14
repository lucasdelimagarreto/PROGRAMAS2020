#include <stdio.h>
#include <stdlib.h>

int main (){

    int bolas = 0, valor = 0;
    
    char recipiente;
    
    printf("Digite qual o recipiente: (co - para copo, ca - para casquinha e cn - para casquinha com nutella)");
    scanf("%c", &recipiente);

    if (recipiente == "co"){

        printf("Quantas bolas de sorvete: ");
        scanf("%d", &bolas);

        if (bolas <= 1 && bolas <= 2){

            valor = bolas * 2,5;
            printf("%d", valor);

        }
        valor = 0;
        if (bolas > 2 && bolas < 14){

            valor = bolas * 2,25;
            printf("%d", valor);
        }
        valor = 0;
        else{

            valor = bolas * 2,15;
            printf("%d", valor);

        }
        


    }
    


    return 0;
}