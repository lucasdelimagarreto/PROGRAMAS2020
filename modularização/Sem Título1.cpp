#include <stdio.h>
#include <stdlib.h>

int PesquisaBinaria (int vet[], int chave, int tam){
	
    int inf = 0;     // limite inferior (o primeiro �ndice de vetor em C � zero          )
    int sup = tam - 1; // limite superior (termina em um n�mero a menos. 0 a 9 s�o 10 n�meros)
    int meio;
     
    while (inf <= sup)
    {
        meio = (inf + sup)/2;
          
        if (chave == vet[meio]){
		  
            return meio;
               
		}
		else if (chave < vet[meio]){
		  
            sup = meio - 1;
        }
        else{
		  
            inf = meio + 1;
        }
    }
    return -1;   // n�o encontrado
}
main( ){
	
	printf("Busca Linear\n");
	
	int numeros[10]={1,2,3,4,5,6,7,8,9,10};
	int i, valor;
	
	printf("Qual eh o valor a procurar?\n");
	scanf("%d", &valor);
	
	int e;
	e = PesquisaBinaria (numeros, valor, 10);
	
	if (e != -1){
		printf("Achou na posicao %d!", e);
	}
	
	return(0);
}
