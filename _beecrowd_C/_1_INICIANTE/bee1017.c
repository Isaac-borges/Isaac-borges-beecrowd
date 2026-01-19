#include <stdio.h>

double calcularDistancia(int tempo_viagem, int velocidade_media)
{
    return tempo_viagem * velocidade_media;
}

double calcularCombustivel(double distancia)
{
    double km_por_litro = 12;

    return distancia / km_por_litro;
}

int main(void)
{
    int tempo_viagem, velocidade_media;
    double distancia, litros_necessarios;

    fscanf(stdin, "%d", &tempo_viagem);
    fscanf(stdin, "%d", &velocidade_media);

    distancia = calcularDistancia(tempo_viagem, velocidade_media);
    litros_necessarios = calcularCombustivel(distancia);

    fprintf(stdout, "%.3lf\n", litros_necessarios);

    return 0;
}
