#include <stdio.h>
int main()
{
    float s, t, u;
    s=0;
    for (u = 50; u <= 70; u++){
        s=s+u;
    }
    printf("numeros pares entre 50 a 70\nsoma: %.2f\n", s);
    printf("media: %.2f\n", s/20);

}
