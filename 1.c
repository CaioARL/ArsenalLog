#include <stdio.h>

int main()
{
    int n, i, x, y;
    int a, b, s1=0, s2=0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        scanf("%d", &y);

        if (x > y)
        {
            for (a = (y+1); a < x; a++)
            {
                if ((a % 2) != 0)
                {
                    s1 += a;
                }
            }
            printf("%d\n", s1);
            s1=0;
        }
        if (x < y)
        {
            for (b = (x+1); b < y; b++)
            {
                if ((b % 2) != 0)
                {
                    s2 += b;
                }
            }
            printf("%d\n", s2);
            s2=0;
        }
        else if (x==y)
        {
            printf("0\n");
        }
    }
}