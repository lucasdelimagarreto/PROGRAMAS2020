#include <stdio.h>
#include <stdlib.h>

int main (){

    int matriz[10][3], aux = 0, aux2 = 0, aux3 = 0, linha1 = 0, linha2 = 0, linha3 = 0, contE = 0, contD = 0;


    while (aux != -1){

        printf("Digite os valores que serão adicionados na matriz: ");
        scanf("%d", &aux);

        if (contE == 9 || contD == 9){
            
            aux2 = 1;

            if (contE == 9){

                matriz[linha2][1] = matriz[linha2][0];
                linha2++;
                
                while (aux2 != 9){

                    matriz[aux2 - 1][0] = matriz[aux2][0];
                    aux2++;


                }

            }
            
            aux2 = 1;
            
            if (contD == 9){

                matriz[linha2][1] = matriz[linha2][2];
                linha2++;
                
                while (aux2 != 9){

                    matriz[aux2 - 1][2] = matriz[aux2][2];
                    aux2++;
                    
                        
                }
        
            }

        }

        else{

            if (aux % 2 == 1){

                matriz[linha1][0] = aux;
                linha1++;
                contE++;
            
            }

            else{
            
                matriz[linha3][2] = aux;
                linha3++;
                contD++;

            }
        
        }
        
    }

    for (int i = 0; i < 10; i++){

        for (int j = 0; j < 3; j++){

            printf("%d", matriz[i][j]);

        }

        printf("\n");
        
    }
    

    return 0;
}