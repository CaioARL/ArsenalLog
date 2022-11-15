#include <stdio.h>
int main()
{
    double soma = 0.0, matriz[12][12];
    int coluna, i, j, ini, fim, x=0;
    char opera[2];

    scanf("%d", &coluna);
    scanf("%s", &opera);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (i = 7; i < 12; i++)
    {
        ini = 5 - x;
        fim = 6 + x;
        for (j = ini; j <= fim; j++)
        {
            soma += matriz[i][j];
        }
        x += 1;
    }

    if (opera[0] == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else if (opera[0] == 'M')
    {
        printf("%.1lf\n", (soma / 12.0));
    }

    return 0;
}
