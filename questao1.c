#include <stdio.h>

int main()
{

    float n1, n2, n3, media_a;

    printf("insira tres numeros:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    media_a = (n1 + n2 + n3) / 3;

    int total = 0;

    if (n1 > media_a)
    {
        total++;
    }

    if (n2 > media_a)
    {
        total++;
    }

    if (n3 > media_a)
    {
        total++;
    }

    printf("total de numeros acima da media: %i\n", total);
    return 0;
}