#include<stdio.h>
int main()
{
    int n1, n2, q;
    q=0;
    printf("escreva o dividendo: ");
    scanf("%i", &n1);
    printf("escreva o divisor: ");
    scanf("%i", &n2);
    while(n1>=n2){
        n1 =n1-n2;
        q=q+1;
    }
    printf("o quociente da divisao e: %i",q);
}
