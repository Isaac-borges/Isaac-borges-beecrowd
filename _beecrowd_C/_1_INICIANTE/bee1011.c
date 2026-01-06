#include <stdio.h>

double POW(double NUM, int EXPOENTE)
{
    double RESULTADO = NUM;

    for (int i = 1; i < EXPOENTE; i++) {
        RESULTADO *= NUM;
    }

    return RESULTADO;
}

double calcularVolume(double RAIO) 
{
    return (4/3.0) * 3.14159 * (POW(RAIO, 3));
}

int main(void)
{
    double RAIO, VOLUME;

    fscanf(stdin, "%lf", &RAIO);

    VOLUME = calcularVolume(RAIO);

    fprintf(stdout, "VOLUME = %.3lf\n", VOLUME);

    return 0;
}