#include <stdio.h>
int main(){
	
	int numero, i, j, cont_resto = 0,cont_primos,j;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	for(j = 0;j<numero * 2; j++){

		for (i = 1; i<= numero; i++){
			if(numero % i ==0){
				cont_resto++;
			}
		}
		
		if(cont_resto == 2){
			printf("numero e primo");
			cont_primos++;
		}
        else{
			printf("numero nao e primo ");
		}
	}
	printf("Quantidade de numeros primos: %d",cont_primos);
}