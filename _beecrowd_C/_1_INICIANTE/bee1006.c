#include <stdio.h>

int main(void)
{
    double A, B, C, media, PESO_A, PESO_B, PESO_C;

    PESO_A = 2;
    PESO_B = 3;
    PESO_C = 5;

    fscanf(stdin, "%lf", &A);
    fscanf(stdin, "%lf", &B);
    fscanf(stdin, "%lf", &C);

    media = ((A * PESO_A) + (B * PESO_B) + (C * PESO_C)) / (PESO_A + PESO_B + PESO_C);

    fprintf(stdout, "MEDIA = %.1lf\n", media);
    
    return 0;
}