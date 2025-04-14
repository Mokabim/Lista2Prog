#include <stdio.h>

int main()
{

    int x;

    printf("insira um valor:\n");
    scanf("%i", &x);

    if (x == 0)
    {
        printf("O numero eh 0!\n");
    }

    if (x > 0 && x % 2 == 0)
    {
        printf("O numero eh positivo e par!\n");
    }

    if (x > 0 && x % 2 != 0)
    {
        printf("O numero eh positivo e impar!\n");
    }

    if (x < 0 && x % 2 == 0)
    {
        printf("O numero eh negativo e par!\n");
    }

    if (x < 0 && x % 2 != 0)
    {
        printf("O numero eh negativo e impar!\n");
    }

    return 0;
}