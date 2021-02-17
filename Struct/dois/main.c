#include <stdio.h>
#include <stdlib.h>

int main(){
    //definir a estrutura
    struct horario{
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

    struct horario agora;

    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%d:%d:%d\n", agora.horas, agora.minutos, agora.segundos);

    struct horario depois;

    depois.horas = agora.horas+10;
    depois.minutos = agora.minutos;
    depois.teste = 50.55/123;
    depois.letra = 'a';

    printf("%d\n", depois.horas);
    printf("%d\n", depois.minutos);
    printf("%.2f\n", depois.teste);
    printf("%c\n", depois.letra);

    return 0;
}


