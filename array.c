#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, k, a[10];
    for (c = 0; c < 10; c++)
        a[c] = rand() % 100;
    printf("Adivina el numero: ");
    scanf("%d", &k);
    for (c = 0; c < 10; c++)
        if (a[c] == k)
            printf("Encontrado en la posicion %d\n", c + 1);
    return 0;
}