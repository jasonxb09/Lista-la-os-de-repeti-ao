#include<stdio.h>

int main()
{
    int b, e, c=1, d;
    printf("Escreva a base da potencia: ");
    scanf("%i", &b);
    printf("Escreva o expoente da potencia: ");
    scanf("%i", &e);
    if(b>0 && e>0){
        for(d=1;d<=e;d++)
        {
            c=c*b;
        }
        printf("%i", c);
    }
}
