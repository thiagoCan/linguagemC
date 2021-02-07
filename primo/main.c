#include <stdio.h>
#include <stdlib.h>

int main(){

    int primo, i;
    int cont=0;

    printf("primo= ");
    scanf("%d", &primo);

    for(i=1; i<=primo; i++){
        if(primo%i==0) cont++;
        if(cont>2){
            printf("\n%d nao eh primo", primo);
            break;
        }
    }

    if(cont==2) printf("\n%d eh primo", primo);

    return 0;
}
