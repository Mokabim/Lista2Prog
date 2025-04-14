#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c, x1, x2, delta;

    printf("isira os valores de a, b e c:\n");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0)
    {
        printf("nao eh uma equacao de segundo grau!\n");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("nao existem raizes reais!\n");
    }

    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("a unica raiz eh %0.2f", x1);
    }

    else
    {

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("a equacao tem duas raizes, sendo elas %0.2f e %0.2f", x1, x2);
    }

    return 0;
}
