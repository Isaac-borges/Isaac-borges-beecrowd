#include <stdio.h>

int main(void) 
{
    int A, B, soma;

    scanf("%d", &A);
    scanf("%d", &B);

    soma = A + B;

    fprintf(stdout, "X = %d\n", soma);

    return 0;
}