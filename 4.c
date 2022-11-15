#include <stdio.h>

int main()
{
    double res, fib[60] = {0,1};
    int i, repet, num;

    scanf("%d", &repet);

    for (i = 2; i < 61; i++)
    {
        fib[i] = (fib[i-1])+(fib[i-2]);
    }

    for (i = 0; i < repet; i++)
    {
        scanf("%d", &num);
        res = fib[num];
        printf("Fib(%d) = %.0f\n", num, res);
    }
    return 0;
}