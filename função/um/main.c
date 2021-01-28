#include <stdio.h>
#include <stdlib.h>

int main(){

    float areaRetangulo(float x, float y);

    float a=areaRetangulo(10, 20);

    printf("A area eh: %.2f", a);

    return 0;
}

float areaRetangulo(float base, float altura){
    float area;

    area=base*altura;

    return area;
}
