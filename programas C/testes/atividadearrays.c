#include <stdio.h>
#include <stdlib.h>

int main(){
    
    
    int i, j, k;
    int turma1[10][2], turma2[10][2];
    char alunos[10][100];
    
    
    for (i = 0; i < 2;i++){

        for (j = 0; j < 10;j++){

            printf("digite o nome do aluno %d da truma %d: ", j + 1, i + 1);
            gets(alunos[i][j]);
            printf("\n");

        }
        
    }
    return 0;
}