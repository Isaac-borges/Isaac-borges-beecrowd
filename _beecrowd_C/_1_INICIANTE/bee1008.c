#include <stdio.h>

int main(void)
{
    int NUM, NUM_HORAS;
    double VALOR_HORA, SALARIO;

    fscanf(stdin, "%d", &NUM);
    fscanf(stdin, "%d", &NUM_HORAS);
    fscanf(stdin, "%lf", &VALOR_HORA);

    SALARIO = NUM_HORAS * VALOR_HORA;

    fprintf(stdout, "NUMBER = %d\nSALARY = U$ %.2lf\n", NUM, SALARIO);

    return 0;
}