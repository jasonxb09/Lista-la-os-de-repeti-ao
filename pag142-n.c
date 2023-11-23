#include <stdio.h>
int main()
{
    float a, s, m, d;
    s=0;
    d=0;
    printf("escreva um valor(para prosseguir com o algoritmo é necessario escrever um valor menor que 0:\n");
    do
    {
        printf("escreva valor: ");
        scanf("%f", &a);
        if (a >= 0){
            s=s+a;
            d=d+1;
        }
    } while(a>=0);
    if (d> 0){
        m=s/d;
        printf("\nsoma: %f\n", s);
        printf("media: %f\n", m);
        printf("total de valores lidos foi de: %.0f\n", d);
    }
}

