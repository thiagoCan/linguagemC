#include <stdio.h>
#include <stdlib.h>
//funciona como se fosse uma variável estática.
int gVariavelGlobal=2;

int main(){

    void teste();

    printf("Global = %d\n", gVariavelGlobal);
    teste();
    teste();
    teste();

    return 0;
}

void teste(){
    int variavel=2;

    variavel*=2;

    static int variavelEstatica=2;
    variavelEstatica*=2;

    gVariavelGlobal*=2;

    printf("%d\n", variavel);
    printf("%d\n", variavelEstatica);
    printf("Global = %d\n", gVariavelGlobal);
}
