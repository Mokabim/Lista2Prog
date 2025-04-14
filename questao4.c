#include <stdio.h>

int main()
{

    float cat, distancia, consumo;

    printf("insira a distancia do percurso:\n");
    scanf("%f", &distancia);

    printf("insira a categoria (1 para A, 2 para B, 3 para C:)\n");
    scanf("%f", &cat);

    if (cat == 1)
    {
        consumo = distancia * 0.15;
        printf("seu consumo foi de %0.2f", consumo);
    }

    else if (cat == 2)
    {
        consumo = distancia * 0.12;
        printf("seu consumo foi de %0.2f", consumo);
    }

    else if (cat == 3)
    {
        consumo = distancia * 0.10;
        printf("seu consumo foi de %0.2f", consumo);
    }
    return 0;
}