#include <stdio.h>

int contar_as(char* string)
{
    char anterior = 0;

    int trocar = 0;
    int a1 = 0;
    int a2 = 0;

    while (*string != 0)
    {
        if (*string == 'a')
        {
            if (trocar == 0) a1 += 1;
            else if (trocar == 1) a2 += 1;
        }

        if (anterior == 'a' && *string != 'a')
            trocar = 1;

        anterior = *string;
        string++;
    }

    return a1 * a2;
}

int main(void)
{
    int C;
    char hamekame[201];
    fscanf(stdin, "%d", &C);
    getchar();

    for (int i = 0; i < C; i++)
    {
        scanf("%s", hamekame);
        int ka = contar_as(hamekame);
        printf("%c", 'k');
        for (int j = 0; j < ka; j++)
        {
            printf("%c", 'a');
        }
        printf("%c", '\n');
    }

    return 0;
}
