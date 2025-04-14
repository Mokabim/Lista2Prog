#include <stdio.h>

int main()
{

    int opcao1, opcao2, opcao3;

    printf("vava ou mine?(escolha 1 ou 2)\n");
    scanf("%i", &opcao1);

    printf("sozinho ou com amigos?(escolha 1 ou 2)\n");
    scanf("%i", &opcao2);

    printf("de noite ou de dia?(escolha 1 ou 2)\n");
    scanf("%i", &opcao3);

    if (opcao1 == 1 && opcao2 == 1 && opcao3 == 1)
    {
        printf("voce eh um possivel serial killer...\n");
    }

    else if (opcao1 == 1 && opcao2 == 1 && opcao3 == 2)
    {
        printf("voce eh um gamer solitario...\n");
    }

    else if (opcao1 == 1 && opcao2 == 2 & opcao3 == 1)
    {
        printf("voce eh gamer try hard!\n");
    }

    else if (opcao1 == 1 && opcao2 == 2 && opcao3 == 2)
    {
        printf("voce eh gamer low elo!\n");
    }

    else if (opcao1 == 2 && opcao2 == 1 && opcao3 == 1)
    {
        printf("voce eh gamer com insonia!\n");
    }
    else if (opcao1 == 2 && opcao2 == 1 & opcao3 == 2)
    {
        printf("voce eh gamer tranquilo!\n");
    }

    else if (opcao1 == 2 && opcao2 == 2 && opcao3 == 1)
    {
        printf("voce eh gamer aventureiro!\n");
    }

    else
    {
        printf("voce eh gamer mirim!\n");
    }
    return 0;
}