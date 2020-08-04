#include <stdio.h>
#include <stdlib.h>

int main(void){

    float nota;
    
    printf("qual a nota? ");
    scanf("%f", &nota);

    if (nota <= 10.0 && nota >= 9.0)
    {
        printf("Sua nota e A");
    }
    else if (nota < 9.0 && nota >= 8.0)
    {
        printf("Sua nota e B");
    }
    else if (nota < 8.0 && nota >= 7.0)
    {
        printf("Sua nota e C");
    }
    else if (nota < 7.0 && nota >= 5.0)
    {
        printf("Sua nota e D");
    }
    else
    {
        printf("Sua nota e F");
    }
    
    return 0;
}