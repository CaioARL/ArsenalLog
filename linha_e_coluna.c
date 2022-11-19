#include <stdio.h>
int main()
{
    int matriz[12][12];
    float somaLinha = 0.0, somaColuna = 0.0;
    int linha, coluna, i, j;
    char opera[2], sair[2];

    printf("\tMATRIZ COMPLETA\n\n");

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            matriz[i][j] = rand() % 100;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    while (sair[0] != 's')
    {
        printf("linha escolhida:\n");
    scanf("%d", &linha);
    printf("coluna escolhida:\n");
    scanf("%d", &coluna);
    printf("Operacao a realizar (S = soma, M = Media):\n");
    scanf("%s", &opera);

    for (j = 0; j < 12; j++)
    {
        somaLinha += matriz[linha - 1][j];
        somaColuna += matriz[j][coluna - 1];
    }

    if (opera[0] == 'S')
    {
        printf("Soma da linha: %.2f\nSoma da coluna: %.2f\n", somaLinha, somaColuna);
    }else if (opera[0] == 'M')
    {
        printf("Media da linha: %.2f\nMedia da coluna: %.2f\n", somaLinha/12, somaColuna/12);
    }

    printf("\n\tDeseja sair? (s = sim, n = nao)\n");
    scanf("%s", &sair);
    }

    return 0;
}
