#include <stdio.h>

int main()
{

    float x, y, operacao, resultado;

    printf("insira o x e o y:\n");
    scanf("%f%f", &x, &y);

    printf("selecione uma operacao (1 - media entre x e y; 2 - diferenca do maior pelo menor numero; 3 - produto entre x e y; 4 - divisao entre x e y):\n");
    scanf("%f", &operacao);

    if (operacao == 1)
    {

        resultado = (x + y) / 2;

        printf("a media entre x e y eh %f\n", resultado);
        return 0;
    }

    else if (operacao == 2)
    {

        if (x > y)
        {
            resultado = x - y;
            printf("a diferenca etre o maior e o menor eh:%f\n", resultado);
            return 0;
        }

        else
        {
            resultado = y - x;
            printf("a diferenca etre o maior e o menor eh:%f\n", resultado);
            return 0;
        }
    }

    else if (operacao == 3)
    {

        resultado = x * y;
        printf("o produto entre x e y eh:%f\n", resultado);
        return 0;
    }

    else if (operacao == 4)
    {
        if (y == 0)
        {
            printf("nao se divide por 0!\n");
            return 0;
        }
        else
        {

            resultado = (x / y);
            printf("a divisao entre x e y eh:%f\n", resultado);
            return 0;
        }
    }

    else
    {
        printf("voce nao selecionou uma operacao valida\n");
    }
    return 0;
}