#include <stdio.h>
#include <ctype.h>

int main()
{

    char x;

    printf("insira uma vogal:\n");
    scanf(" %c", &x);

    x = tolower(x);

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        printf("eh uma vogal!\n");
    }

    else
    {
        printf("nao eh vogal!\n");
    }
    return 0;
}