#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;

    printf("Digite a (inteiro): ");
    scanf("%d", &a);

    printf("Digite b (inteiro): ");
    scanf("%d", &b);

    if(b==0)printf("divisao nao pode ser feita");
    else if(a%b==0) printf("%d eh divisivel por %d", a, b);
    else printf("%d nao eh divisivel por %d", a, b);

    return 0;
}
