#include <stdio.h>
int main()
{
    float somaInf = 0.0, somaSup = 0.0, somaEsq = 0.0, somaDir = 0.0;
    int matriz[12][12], coluna, i, j, ini, fim, x = 0, y = 4;
    char opera[2];
    printf("\tMATRIZ COMPLETA\n");
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            matriz[i][j] = rand() % 10;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    for (i = 7; i < 12; i++)
    {
        ini = 5 - x;
        fim = 6 + x;
        for (j = ini; j <= fim; j++)
        {
            somaInf += matriz[i][j]; somaSup += matriz[y][j];
            somaEsq += matriz[j][y]; somaDir += matriz[j][i];
        }
        x++;
        y--;
    }
    printf("Considerando as 4 areas da matriz, deseja ver a soma ou a media delas?(Soma = S, Media = M)\n");
    scanf("%s", &opera);
    if (opera[0] == 'S')
    {
        printf("Soma Area Inferior: %.2f\n", somaInf);
        printf("Soma Area Superior: %.2f\n", somaSup);
        printf("Soma Area Esquerda: %.2f\n", somaEsq);
        printf("Soma Area Direita: %.2f\n", somaDir);
    }
    else if (opera[0] == 'M')
    {
        printf("Media Area Inferior: %.2f\n", somaInf / 30);
        printf("Media Area Superior: %.2f\n", somaSup / 30);
        printf("Media Area Esquerda: %.2f\n", somaEsq / 30);
        printf("Media Area Direita: %.2f\n", somaDir / 30);
    }
    return 0;
}