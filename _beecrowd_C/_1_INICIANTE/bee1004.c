#include <stdio.h>

int main(void) 
{
    int A, B, PROD;

    fscanf(stdin, "%d", &A);
    fscanf(stdin, "%d", &B);

    PROD = A * B;

    fprintf(stdout, "PROD = %d\n", PROD);
    
    return 0;
}