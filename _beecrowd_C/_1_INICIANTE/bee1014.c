#include <stdio.h>

double calcularConsumo(int DISTANCIA_KM, double COMBUSTIVEL_GASTO)
{
    return DISTANCIA_KM / COMBUSTIVEL_GASTO;
}

int main(void)
{
    int X;
    double Y, CONSUMO;

    fscanf(stdin, "%d", &X);
    fscanf(stdin, "%lf", &Y);

    CONSUMO = calcularConsumo(X, Y);

    fprintf(stdout, "%.3lf km/l\n", CONSUMO);

    return 0;

}
