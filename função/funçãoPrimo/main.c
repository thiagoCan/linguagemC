#include <stdio.h>
#include <stdlib.h>

int main(){
    int numPrimo(int x);

    for (int j=100; j<=120; j++){
        if(numPrimo(j)!= 0) printf("%d ", numPrimo(j));
    }

    return 0;
}

int numPrimo(int primo){

    int cont=0;

    for(int i=1; i<=primo; i++){
        if(primo%i==0) cont++;
        if(cont>2){
            break;
        }
    }

    if(cont==2)return primo;

    return 0;
}
