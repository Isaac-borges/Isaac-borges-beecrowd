#include <stdio.h>

double calcularPreco(int NUM_PECAS, double VALOR_UNITARIO) 
{
    return NUM_PECAS * VALOR_UNITARIO;
}

int main(void)
{
    int COD_1, NUM_1, COD_2, NUM_2;
    double VALOR_UNI_1, VALOR_UNI_2, VALOR_1, VALOR_2, TOTAL;

    fscanf(stdin, "%d %d %lf", &COD_1, &NUM_1, &VALOR_UNI_1);
    fscanf(stdin, "%d %d %lf", &COD_2, &NUM_2, &VALOR_UNI_2);

    VALOR_1 = calcularPreco(NUM_1, VALOR_UNI_1);
    VALOR_2 = calcularPreco(NUM_2, VALOR_UNI_2);

    TOTAL = VALOR_1 + VALOR_2;

    fprintf(stdout, "VALOR A PAGAR: R$ %.2lf\n", TOTAL);

    return 0;
}