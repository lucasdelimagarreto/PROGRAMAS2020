#include <stdio.h>
#include <stdlib.h>

int main (){

    int matriz[10][3], aux = 0, aux2 = 0, aux3 = 0, linha1 = 0, linha2 = 0, linha3 = 0, contE = 0, contD = 0;

    for (int i = 0; i < 10; i++){

        for (int j = 0; j < 3; j++){

            matriz[i][j] = 0;
        }
        
    }
    

    while (aux != -1){

        printf("Digite os valores que serão adicionados na matriz: ");
        scanf("%d", &aux);
        

        if (contE == 9 || contD == 9){

            matriz[aux2][1] = matriz[linha2][0];
            linha2++;

            matriz[aux2][1] = matriz[linha2][2];
            linha2++;

            aux2++;


        }

        else{

            if (aux % 2 == 1){
                
                matriz[linha1][0] = aux;
                linha1++;
                contE++;

                if (matriz[linha1][0] == -1){

                    matriz[linha1][0] == 0;
                    
                }
                
            }

            else{
            
                matriz[linha3][2] = aux;
                linha3++;
                contD++;

                if (matriz[linha1][0] == -1){
                    
                    matriz[linha1][0] == 0;

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