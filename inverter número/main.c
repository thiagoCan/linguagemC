#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("digite a: ");
    scanf("%d", &a);

    if(a>=0){
        do{
            b=a%10;
            printf("%d", b);
            a/=10;
        }while(a!=0);
    }
    else if(a<0){
        a*=-1;
        printf("-");

        do{
            b=a%10;
            printf("%d", b);
            a/=10;
        }while(a!=0);
    }

    return 0;
}
