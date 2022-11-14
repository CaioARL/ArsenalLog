#include <stdio.h>

int main()
{
    int vPar[5], vImpar[5];
    int x, i, n, par = 0, imp = 0, contP = 0, contI = 0;

    for (x = 0; x < 15; x++)
    {
        scanf("%d", &n);

        if ((n % 2) == 0)
        {
            vPar[par] = n;
            contP += 1;
            par += 1;
        }
        if ((n % 2) != 0)
        {
            vImpar[imp] = n;
            contI += 1;
            imp += 1;
        }

        if (contP == 5)
        {
            for (i = 0; i < 5; i++)
            {
                printf("par[%d] = %d\n", i, vPar[i]);
                par = 0;
                contP = 0;
            }
        }
        if (contI == 5)
        {
            for (i = 0; i < 5; i++)
            {
                printf("impar[%d] = %d\n", i, vImpar[i]);
                imp = 0;
                contI = 0;
            }
        }
    }

    for (i = 0; i < contI; i++)
    {
        printf("impar[%d] = %d\n", i, vImpar[i]);
    }
    for (i = 0; i < contP; i++)
    {
        printf("par[%d] = %d\n", i, vPar[i]);
    }

    return 0;
}