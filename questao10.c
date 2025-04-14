#include <stdio.h>

int main()
{

    float combustivel, litros, preco_tot, preco_f, desconto;
    printf("qual o tipo de combustivel (1 para etanol e 2 para gasolina):\n");
    scanf("%f", &combustivel);

    printf("quantos litros vai abastecer?\n");
    scanf("%f", &litros);

    if (combustivel == 1 && litros <= 20)
    {

        preco_tot = litros * 4.5;
        desconto = preco_tot * 0.04;
        preco_f = preco_tot - desconto;

        printf("o preco sem desconto eh %0.2f, o desconto eh %0.2f e o total a pagar eh %0.2f\n", preco_tot, desconto, preco_f);
        return 0;
    }
    else if (combustivel == 1 && litros > 20)
    {

        preco_tot = litros * 4.5;
        desconto = preco_tot * 0.07;
        preco_f = preco_tot - desconto;

        printf("o preco sem desconto eh %0.2f, o desconto eh %0.2f e o total a pagar eh %0.2f\n", preco_tot, desconto, preco_f);
        return 0;
    }

    else if (combustivel == 2 && litros <= 20)
    {

        preco_tot = litros * 5.8;
        desconto = preco_tot * 0.05;
        preco_f = preco_tot - desconto;

        printf("o preco sem desconto eh %0.2f, o desconto eh %0.2f e o total a pagar eh %0.2f\n", preco_tot, desconto, preco_f);
        return 0;
    }

    else if (combustivel == 2 && litros > 20)
    {

        preco_tot = litros * 5.8;
        desconto = preco_tot * 0.09;
        preco_f = preco_tot - desconto;

        printf("o preco sem desconto eh %0.2f, o desconto eh %0.2f e o total a pagar eh %0.2f\n", preco_tot, desconto, preco_f);
    }

    return 0;
}