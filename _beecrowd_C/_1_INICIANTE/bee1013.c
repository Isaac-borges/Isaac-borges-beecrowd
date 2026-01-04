#include <stdio.h>

int ABS(int num) 
{
    if (num >= 0) return num;

    return num * -1;
}

int getMaior(int A, int B) 
{   
    return (A+B+(ABS(A - B))) / 2; 
}

int main(void) 
{
    int A, B, C, maior;

    fscanf(stdin, "%d %d %d", &A, &B, &C);

    maior = getMaior(A, B);
    maior = getMaior(maior, C);

    fprintf(stdout, "%d eh o maior\n", maior);

    return 0;
}