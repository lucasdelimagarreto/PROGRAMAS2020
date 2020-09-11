#include <stdio.h>
#include <stdlib.h>

main( ){
	
	int vet[5]={5,3,1,2,4};
	int i,j, aux;
	
	for (i=0;i<5;i++){
		printf("%d, ",vet[i]);
	}
	
	printf("\n");
	
	for (j=0;j<4;j++){
		for (i=0;i<5;i++){
		printf("%d, ",vet[i]);
		}
		
		printf("O valor de j eh %d:\n",j);
		printf("\n");
		for (i=0;i<4;i++){
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
	
	
	for (i=0;i<5;i++){
		printf("%d, ",vet[i]);
	}
	
	
	return(0);
}
