#include <stdio.h>
#include <math.h>

int main(void)
{
    double raio, area;

    fscanf(stdin, "%lf", &raio);  

    area = 3.14159 * pow(raio, 2);

    fprintf(stdout, "A=%.4lf\n", area);

    return 0;
}