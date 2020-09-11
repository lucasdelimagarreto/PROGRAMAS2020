#include <stdio.h>
#include <stdlib.h>

void ordena(int vet[], int tam){
	
	int i, j, aux;
	
	for (j=0;j<9;j++){
		
		printf("O valor de j eh %d:\n",j);
		printf("\n");
		for (i=0;i<9;i++){
			printf("O valor de i eh %d:\n",i);
			printf("O valor atual eh %d, e o prox eh %d\n",vet[i], vet[i+1]);
		
			if(vet[i]>vet[i+1]){
				aux=vet[i];
				vet[i]=vet[i+1];
				vet[i+1]=aux;
				printf("trocou\n");
			}
			printf("O valor atualizado é eh %d, e o prox eh %d\n",vet[i], vet[i+1]);
			printf("\n");
		
		}
	}
	
}

int PesquisaBinaria (int vet[], int chave, int tam){
	
    int inf = 0;     // limite inferior (o primeiro índice de vetor em C é zero          )
    int sup = tam - 1; // limite superior (termina em um número a menos. 0 a 9 são 10 números)
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
    return -1;   // não encontrado
}

main (){
	
	int v[10];
	
	int i, valor;
	
	for(i = 0; i < 10; i++){
		printf("adicione valor ao vetor na pos %d\n", i);
		scanf("%d", &v[i]);
		
	}
	ordena(v, 10);
	
	printf("digite o valor que deseja procurar: \n");
	scanf("%d", &valor);
	
	printf("\n");
	
	for(i = 0; i < 10; i++){
		printf("%d", v[i]);
	}
	
	int e;
	
	e = PesquisaBinaria(v, valor, 10);
	
	if (e != -1){
		printf("\nAchou na posicao %d!", e);
	}
	
	else{
		printf("\nvalor não encontrado no vetor!");
	}
	
	
	
	
	
	return 0;
}
