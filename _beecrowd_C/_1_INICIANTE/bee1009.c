#include <stdio.h>

int main(void)
{
    char NOME[100];
    double SALARIO, MONTANTE, COMISSAO, TOTAL;

    fscanf(stdin, "%s", NOME);
    fscanf(stdin, "%lf", &SALARIO);
    fscanf(stdin, "%lf", &MONTANTE);

    COMISSAO = 0.15 * MONTANTE;
    TOTAL = COMISSAO + SALARIO;

    fprintf(stdout, "TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}