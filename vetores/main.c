#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas[5];
    float total=0, media;

    printf("Insira 5 notas: \n");

    for(int i=0; i<5; i++){
        scanf("%f", &*(notas+i));
    }

    for(int i=0; i<5; i++){
        total+=notas[i];
    }
    media=total/5;

    printf("A media do aluno eh %.2f", media);
    return 0;
}
