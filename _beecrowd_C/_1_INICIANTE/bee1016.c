#include <stdio.h>

// Iteração será utilizada para resolver isso

int calcularDistancia(int distancia)
{
    int minutos = 0;
    float contador_distancia = 0;
    
    do 
    {
        minutos += 1;
        contador_distancia += 0.5;
    } while (contador_distancia < distancia);
    
    return minutos;
}


int main(void)
{
    int distancia, tempo_necessario;

    fscanf(stdin, "%d", &distancia);
    // A cada segundo o carro X se distancia 0.5 km do carro Y
    tempo_necessario = calcularDistancia(distancia);
    
    fprintf(stdout, "%d minutos\n", tempo_necessario);

    return 0;
}

