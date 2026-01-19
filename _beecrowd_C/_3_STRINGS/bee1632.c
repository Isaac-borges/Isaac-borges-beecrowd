#include <stdio.h>
#include <ctype.h>


int tem_3_variacoes(int S)
{
    int caracteres_com_3_variacoes[5] = {97, 101, 105, 111, 115};
    for (int i = 0; i < 5; i++) 
    {
        if (S == caracteres_com_3_variacoes[i]) return 1;
  
    }
    
    return 0;
}

int calcular_variacoes(char* S)
{
    int variacoes = 1; // Pelo menos uma variação
    int i = 0;

    while (*S != '\0')
    {
        if (tem_3_variacoes(tolower(*(S++))) == 1) variacoes *= 3;
        else variacoes *= 2;
    }

    return variacoes;
}


int main(void)
{
    int T, num_variacoes;
    char S[16];
    
    fscanf(stdin, "%d", &T);

    for (int i = 0; i < T; i++)
    {
        fscanf(stdin, "%s", S);
        
        num_variacoes = calcular_variacoes(S);
        fprintf(stdout, "%d\n", num_variacoes);
    }
    return 0;
}
