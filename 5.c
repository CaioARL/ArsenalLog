#include <stdio.h>
int main()
{
    double soma = 0.0, matriz[12][12];
    int linha, i, j;
    char opera[2];

    scanf("%d", &linha);
    scanf("%s", &opera);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &matriz[i][j]);
            if (i == linha)
            {
                soma += matriz[i][j];
            }
        }
    }
    if (opera[0] == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else if (opera[0] == 'M')
    {
        printf("%.1lf\n", (soma/12.0));
    }

    return 0;
}
