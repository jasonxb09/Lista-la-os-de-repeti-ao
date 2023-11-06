#include<stdio.h>
int main()
{int x,q;
scanf("%i",&x);
do{
x=x+1;
q=x*x;
printf("%i*%i=%i\n",x,x,q);
}while(x<=199);
}
