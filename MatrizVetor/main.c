#include <stdio.h>
#include <stdlib.h>

int main(){

    const int N=4;
    float notasAlunos[N][N];
    float mediasAlunos[N], soma=0;

    printf("Insira as 4 notas do aluno 1:\n");

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%f", &notasAlunos[i][j]);
            soma+=notasAlunos[i][j];
        }
       mediasAlunos[i]=soma/N;
       soma=0;
       if(i+2<=N) printf("Insira as 4 notas do aluno %d:\n", i+2);
    }

    for(int i=0; i<N; i++){
        printf("A media do aluno %d eh %.2f\n", i+1, mediasAlunos[i]);
    }

    return 0;
}
