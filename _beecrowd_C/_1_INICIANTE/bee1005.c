#include <stdio.h>

int main(void)
{
    double A, B, MEDIA, PESO_A, PESO_B;

    fscanf(stdin, "%lf", &A);
    fscanf(stdin, "%lf", &B);

    PESO_A = 3.5;
    PESO_B = 7.5;

    MEDIA = ((A * PESO_A) + (B * PESO_B))/(PESO_A + PESO_B);

    fprintf(stdout, "MEDIA = %.5lf\n", MEDIA);
    return 0;
}