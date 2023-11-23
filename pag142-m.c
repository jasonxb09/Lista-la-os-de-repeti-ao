#include <stdio.h>
int main()
{
    int a, b , i;
    b=0;
    printf("escreva 10 valores.\n");
    for (i=1;i<=10;i++){
        printf("valor %i: ",i);
        scanf("%i", &a);
        b=b+a;
    }

    printf("soma dos valores: %i\n", b);
    printf("media dos valores: %i\n",b/10);

}

