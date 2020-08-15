#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main (){

    int matriz[TAM][3], aux = 0, aux2 = 0, aux3 = 0, linhaes = 0, linhadi = 0, linhameio = 0, coluna = 0;

    for (int i = 0; i < TAM; i++){

        for (int j = 0; j < 3; j++){

            matriz[i][j] = 0;
            
        }
    }
    
    while (aux != -1){

        printf("Digite o valor: ");
        scanf("%d", &aux);

        if (aux == -1){

            break;
        }
        
        if (aux % 2 == 1){

            //impares
            
            if (linhaes > TAM - 1){

                if (linhameio > TAM -1){

                    for (int i = 0; i < TAM; i++){

                        aux3 = matriz[i][1];
                        matriz[i][1] = matriz[i + 1][1];
                        matriz[i + 1][1] = aux3;
                        
                    }

                    matriz[TAM -1][1] = aux;
                    

                }

                else{

                    for (int i = 0; i < TAM - 1; i++){

                        aux3 = matriz[i][0];
                        matriz[i][0] = matriz[i + 1][0];
                        matriz[i + 1][0] = aux3;
                        
                    
                    }

                    matriz[linhameio][1] = matriz[TAM - 1][0];
                    matriz[TAM - 1][0] = aux;
                    linhameio++;
  
                }

            }

            else{

                matriz[linhaes][0] = aux;
                linhaes++;

            }
        }

        else{

            //pares

            if (linhadi > TAM - 1){

                if (linhameio > TAM -1){

                    for (int i = 0; i < TAM; i++){

                        aux3 = matriz[i][1];
                        matriz[i][1] = matriz[i + 1][1];
                        matriz[i + 1][1] = aux3;
                        
                    }

                    matriz[TAM -1][1] = aux;
                    
                }

                else{

                    for (int i = 0; i < TAM - 1; i++){

                        aux3 = matriz[i][2];
                        matriz[i][2] = matriz[i + 1][2];
                        matriz[i + 1][2] = aux3;
  
                    }

                    matriz[linhameio][1] = matriz[TAM - 1][2];
                    matriz[TAM - 1][2] = aux;
                    linhameio++;
  
                }

            }

            else{

                matriz[linhadi][2] = aux;
                linhadi++;

            }
        }
    }

    system("cls");

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}