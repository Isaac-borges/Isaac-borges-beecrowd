#include <stdio.h>

void calcularNotas(int VALOR, int arr_qtd_notas[], int notas[]) 
{
    for (int i = 0; i < 7; i++)
    {
        arr_qtd_notas[i] = VALOR / notas[i];
        VALOR %= notas[i];
    }
}

int main(void)
{
    int N;
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int qtd_notas[7] = {0, 0, 0, 0, 0, 0, 0};

    fscanf(stdin, "%d", &N);
    
    calcularNotas(N, qtd_notas, notas);
    
    fprintf(stdout, "%d\n", N);

    for (int i = 0; i < 7; i++)
    {
        fprintf(stdout, "%d nota(s) de R$ %d,00\n", qtd_notas[i], notas[i]);
    }

    return 0;
}
