#include <stdio.h>

int calcular_quantidade(float N, int* valores, int* quantidade, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        *(quantidade+i) = N / *(valores+i);
        N -= *(valores+i) * *(quantidade+i);
    }

    return N;
}

int main(void)
{
    int parte_inteira, parte_decimal, N;
    int tamanho_quantidade;
    int valor_notas[6] = {100, 50, 20, 10, 5, 2};
    int quantidade_notas[6] = {0, 0, 0, 0, 0, 0};

    int valor_moedas_int[6] = {100, 50, 25, 10, 5, 1};
    float valor_moedas_float[6] = {1, 0.5, 0.25, 0.1, 0.05, 0.01};
    int quantidade_moedas[6] = {0, 0, 0, 0, 0, 0};

    fscanf(stdin, "%d.%d", &parte_inteira, &parte_decimal);

    tamanho_quantidade = sizeof(quantidade_notas) / sizeof(quantidade_notas[0]);
    N = calcular_quantidade(parte_inteira, valor_notas, quantidade_notas, tamanho_quantidade);
    parte_decimal = N * 100 + parte_decimal;

    tamanho_quantidade = sizeof(quantidade_moedas) / sizeof(quantidade_moedas[0]); //Calculando mais de uma vez pro caso de ter outra quantidade, no problema não existe.
    calcular_quantidade(parte_decimal, valor_moedas_int, quantidade_moedas, tamanho_quantidade);

    fprintf(stdout, "NOTAS:\n");
    for (int i = 0; i < 6; i++)
        fprintf(stdout, "%d nota(s) de R$ %.d.00\n", quantidade_notas[i], valor_notas[i]);

    fprintf(stdout, "MOEDAS:\n");
    for (int i = 0; i < 6; i++)
        fprintf(stdout, "%d moeda(s) de R$ %.2f\n", quantidade_moedas[i], valor_moedas_float[i]);

    return 0;
}
