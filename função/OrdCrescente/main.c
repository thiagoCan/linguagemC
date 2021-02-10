#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[] = {6, 4, 1, 9 , 8, 0, 23, 21, 40, 11, 5, 7, 3, 2};
    void ordemCrescente(int vetor[], int tamanho);

    ordemCrescente(vetor, 14);

    for(int i=0; i<14; i++){
       printf("%d ", vetor[i]);
    }

    return 0;
}

void ordemCrescente(int vetor[], int n){

    int i, j, temporaria;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(vetor[i]>vetor[j]){
                temporaria=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=temporaria;
            }
        }
    }
}
