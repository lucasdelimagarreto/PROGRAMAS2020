#include <stdio.h>
#include <stdlib.h>

void ordenacao(int vet[], int tam){
	
	int i, j, aux2;
	
	
	for (i = 0; i < tam; i++){
		printf("%d, ",vet[i]);
	}
	
	printf("\n");
	
	for (j = 0; j < tam - 1; j++){
		for (i = 0; i < tam; i++){
		printf("%d, ",vet[i]);
		}
		
		printf("O valor de j eh %d:\n",j);
		printf("\n");
		for (i = 0; i < tam - 1; i++){
			printf("O valor de i eh %d:\n",i);
			printf("O valor atual eh %d, e o prox eh %d\n",vet[i], vet[i+1]);
		
			if(vet[i] < vet[i + 1]){
				aux2 = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux2;
				printf("trocou\n");
			}
			printf("O valor atualizado � eh %d, e o prox eh %d\n",vet[i], vet[i+1]);
			printf("\n");
		
		}
	}
	
}

main (){
	
	int vetor[10];
	
	int aux, i, j, vet2[10];
	
	for(i = 0; i < 10; i++){
		
		printf("digite um numero para o vetor na posicao %d", i + 1);
		scanf("%d", &vetor);
		
	}
	
	ordenacao(vetor, 10);
	
	for(i = 0; i < 10; i++){
		printf("%d", &vet2[i]);
	}

	return 0;
}
