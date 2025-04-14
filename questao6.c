#include <stdio.h>

int main()
{

    int x, y, z, codigo;

    printf("insira tres numeros inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);
    if (x < y && x < z)
    {
        codigo = 1;
    }
    else if (y < x && y < z)
    {
        codigo = 2;
    }
    else if (z < x && z < y)
    {
        codigo = 3;
    }
    else
    {
        codigo = 4;
    }

    switch (codigo)
    {
    case 1:
        printf("O menor eh: %d (x)\n", x);
        break;
    case 2:
        printf("O menor eh: %d (y)\n", y);
        break;
    case 3:
        printf("O menor eh: %d (z)\n", z);
        break;
    default:
        printf("Os tres sao o mesmo valor.\n");
        break;
    }

    return 0;
}
