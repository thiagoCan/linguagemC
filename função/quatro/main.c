#include <stdio.h>
#include <stdlib.h>

int main(){

    float somaNums(float num1, float num2);
    float a, b, soma;

    printf("Digite 2 numeros: ");
    scanf("%f", &a);
    scanf("%f", &b);

    soma=somaNums(a, b);

    printf("A soma eh: %.2f", soma);

    return 0;
}

float somaNums(float num1, float num2){

    float numAbs (float x);

    if(num1<0){
        num1=numAbs(num1);
    }
    if(num2<0){
        num2=numAbs(num2);
    }

    return num1+num2;
}

float numAbs(float x){
    return x*-1;
}
