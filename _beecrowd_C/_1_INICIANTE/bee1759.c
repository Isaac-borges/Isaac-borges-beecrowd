#include <stdio.h>

int main(void)
{
    unsigned int N;

    fscanf(stdin, "%d", &N);

    for (unsigned int i = 1; i < N; i++)
        printf("Ho ");

    printf("Ho!\n");

    return 0;
}
