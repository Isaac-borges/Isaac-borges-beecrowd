#include <stdio.h>

void verficar_intervalo(double numero)
{
    if (numero >= 0 && numero <= 25)
        printf("Intervalo [0,25]\n");
    else if (numero > 25 && numero <= 50)
        printf("Intervalo (25,50]\n");
    else if (numero > 50 && numero <= 75)
        printf("Intervalo (50,75]\n");
    else if (numero > 75 && numero <= 100)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");
}

int main(void)
{
    double numero;

    fscanf(stdin, "%lf", &numero);
    verficar_intervalo(numero);

    return 0;
}
