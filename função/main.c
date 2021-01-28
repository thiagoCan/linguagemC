#include <stdio.h>
#include <stdlib.h>

int main(){

    float calcularAreaRetangulo(float x, float y);

    float a=calcularAreaRetangulo(10, 20);

    printf("A area eh: %.2f", a);

    return 0;
}

float calcularAreaRetangulo(float base, float altura){

    float area=base*altura;

    return area;
}
