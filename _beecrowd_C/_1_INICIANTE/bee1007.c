#include <stdio.h>

int main(void) 
{
    int A, B, C, D, diff;

    fscanf(stdin, "%d", &A);
    fscanf(stdin, "%d", &B);
    fscanf(stdin, "%d", &C);
    fscanf(stdin, "%d", &D);

    diff = (A*B - C*D);

    fprintf(stdout, "DIFERENCA = %d\n", diff);
    return 0;
}