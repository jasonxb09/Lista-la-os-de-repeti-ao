#include <stdio.h>
int main()
{
    int v, s , i;
    s=0;
    printf("escreva 10 valores.\n");
    for (i=1;i<=10;i++){
        printf("valor %i: ",i);
        scanf("%i", &v);
        s=s+v;
    }

    printf("soma dos valores: %i\n", s);
    printf("media dos valores: %i\n",s/10);

}

