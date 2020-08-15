#include <stdio.h>
#include <stdlib.h>

int main (){

    int matriz[10][3], i, j, aux, aux2 = 0, cache = 1;

    for (i = 0; i < 10; i++){

        for (j = 0; j < 3; j++){

            matriz[i][j] = 0;

        }
        
    }

    for (i = 0; i < 10; i++){

        for (j = 0; j < 3; j++){

            printf("Digite um numero inteiro para a matriz: ");
            scanf("%d", &aux);

            if (aux % 2 == 0){

                matriz[i][2] = aux;

                if (i == 9){

                    matriz[aux2][1] = matriz[0][2];

                    for (i = 0; i < 10; i++){

                        matriz[cache - 1][2] = matriz[cache][2];
                        
                    }

                    aux2++;
                    

                }
                

            }
            
            else if (aux % 2 == 1){

                matriz[i][0] = aux;

                if (i == 9){

                    matriz[aux2 + 1][1] = matriz[0][0];

                    for (i = 0; i < 10; i++){

                        matriz[cache - 1][0] = matriz[cache][0];
                        
                    }

                    aux2++;

                }
                
            
            }
            

        }
        
    }

    system("cls");

    for (int i = 0; i < 10; i++){

        for (int j = 0; j < 3; j++){

            printf("%d\t", matriz[i][j]);

        }

        printf("\n");
        
    }


    return 0;
}