#include<stdio.h>
int main()
{
    int n,m,r;
    printf("escreva o numero que se deseja analisar a tabuada: ");
    scanf("%i",&n);
    scanf("%i",&m);
    do{
        r=n*m;
        printf("%i*%i=%i\n",n,m,r);
        m=m+1;
    }while(m<=10);
}
