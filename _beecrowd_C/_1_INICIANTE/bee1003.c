#include <stdio.h>

int main(void) 
{
    int A, B, SOMA;

    fscanf(stdin, "%d", &A);
    fscanf(stdin, "%d", &B);

    SOMA = A + B;

    fprintf(stdout, "SOMA = %d\n", SOMA);

    return 0;
}