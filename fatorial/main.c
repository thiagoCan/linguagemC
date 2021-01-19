#include <stdio.h>
#include <stdlib.h>

int main(){

    int fat, resultado=1;
    printf("digite um numero: ");
    scanf("%d", &fat);


    while(fat>1){
        resultado*=fat;
        fat--;
    }
    printf("%d", resultado);

    return 0;
}
