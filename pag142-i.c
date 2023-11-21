#include <stdio.h>

int main()
{
    int n=0,a=1,p,i;
    printf("sequencia de fibonacci: %i ",n);
    for(i=0;i<=15;i++){
        p= n + a;
        printf("%i ",p);
        a = n;
        n=p;
    }

}
