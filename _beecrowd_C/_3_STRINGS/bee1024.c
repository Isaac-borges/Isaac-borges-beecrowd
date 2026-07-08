#include <ctype.h>
#include <stdio.h>

#define MAX_STRING 1000
void deslocar_direita(char M[MAX_STRING])
{
    while ((*M) != 0)
    {
        if (isalpha((*M)))
        {
            *M = *M + 3;
        }
        M++;
    }
}

int get_last_char_index(char M[MAX_STRING])
{
    int size = -1;
    while ((*M) != '\n')
    {
        size++; M++;
    }

    return size;
}

void inverter(char M[MAX_STRING])
{
    char *observer_fim = M;
    char *observer_inicio = M;
    char temp;

    while (*observer_fim != 0) observer_fim++;
    observer_fim--;

    if (*observer_fim == '\n') observer_fim--;

    while (observer_fim > observer_inicio)
    {
        temp = *observer_fim;
        *observer_fim = *observer_inicio;
        *observer_inicio = temp;
        observer_inicio++; observer_fim--;
    }
}

void deslocar_esquerda(char M[MAX_STRING])
{
    int tamanho = get_last_char_index(M) + 1;
    int metade_index = tamanho / 2;
    for (int i = metade_index; i < tamanho; i++)
    {
        M[i] = M[i] - 1;
    }
}

void criptografar(char M[MAX_STRING])
{
    deslocar_direita(M);
    inverter(M);
    deslocar_esquerda(M);
    printf("%s", M);
}

int main(void)
{
    int N;
    char M[1000];

    scanf("%d", &N);
    getchar();
    for (int i = 0; i < N; i++)
    {
        fgets(M, sizeof(M), stdin);
        criptografar(M);

    }


    return 0;
}
