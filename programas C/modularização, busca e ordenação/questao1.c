#include <stdio.h>
#include <stdlib.h>

int busca(int vet[], int n, int x);

int main (){
	
	int valor = -1, aux, var = 0, procurado, verificador, tam = 30;
	
	int vetor[tam];
	
	while(valor != 0){
		
		printf("Digite o valor que sera armazenado no vetor: ");
		scanf("%d", &valor);
		if (valor != 0){
			vetor[var] = valor;
		}
		var++;
	}
	
	printf("Digite qual valor deseja pesquisar no vetor: ");
	scanf("%d", &procurado);
	
	verificador = busca(vetor, var, procurado);
	
	if (verificador == 1){
		printf("O valor esta no vetor!!!");
		
	}
	else{
		
		printf("o valor n�o est� no vetor!");
	}
	
	return 0;
}

int busca(int vet[], int n, int x){
	
	int inf = 0;     // limite inferior (o primeiro �ndice de vetor em C � zero          )
    int sup = n - 1; // limite superior (termina em um n�mero a menos. 0 a 9 s�o 10 n�meros)
    int meio;
     
    while (inf <= sup){
    	
        meio = (inf + sup)/2;
          
        if (x == vet[meio]){
		  
            return 1;  
		}
		else if (x < vet[meio]){
		  
            sup = meio - 1;
        }
        else{
		  
            inf = meio + 1;
        }
    }
    return 0;   // n�o encontrado
}
