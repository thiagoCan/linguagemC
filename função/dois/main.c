#include <stdio.h>
#include <stdlib.h>

int main(){

    void teste();

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

    printf("%d\n", variavel);
    printf("%d\n", variavelEstatica);
}
