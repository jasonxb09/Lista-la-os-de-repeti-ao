#include <stdio.h>
int main()
{
    int i,f,c;
    for(i=1;i<=10;i=i+2){
        f=1;
        for(c=1;c<=i;c++){
            f=f*c;
        }
        printf("fatorial de %i: %i\n",i,f);
    }
}
