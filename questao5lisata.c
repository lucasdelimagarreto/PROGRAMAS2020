#include <stdio.h>
#include <stdlib.h>

int main (void){
    int val1, val2, val3;

    printf("Diga o primeiro valor: ");
    scanf("%d", &val3);

    printf("Diga o segundo valor: ");
    scanf("%d", &val2);


    printf("Diga o terceiro valor: ");
    scanf("%d", &val1);

    if (val1 > val2 && val2 > val3){
        printf("A ordem e %d,%d,%d", val1,val2,val3);
    }
    else if (val2 > val1 && val1 > val3){
        printf("A ordem e %d,%d,%d", val2, val1, val3);
    }
    else if (val3 > val2 && val2 > val1){
        printf("A ordem e %d,%d,%d", val3, val2, val1);
    }
    else if (val1 > val3 && val3 > val2){
        printf("A ordem e %d,%d,%d", val1, val3, val2);
    }
    else if (val2 > val3 && val3 > val1){
        printf("A ordem e %d,%d,%d", val2, val3, val1);
    }
    else if (val3 > val1 && val1 > val2){
        printf("A ordem e %d,%d,%d", val3, val1, val2);
    }
    
    return 0;

}