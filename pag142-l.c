#include<stdio.h>
int main()
{
    int a,f,r=0,i,k;
    for(i=1;i<=15;i++){
        printf("escreva o valor %i: ", i);
        scanf("%i",&a);
        f=1;
        for(k=1;k<=a;k++){
            f=f*k;
        }
        r=r+f;
    }
    printf("soma dos fatoriais dos valores lidos: %i",r);
}
