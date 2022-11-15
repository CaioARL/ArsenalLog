int main ()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);

    while (a != b)
    {
        if (a > b){
            printf("Decrescente");
            scanf("%d %d", &a, &b);
        }
        if (a < b)
        {
            printf("Crescente");
            scanf("%d %d", &a, &b);
        }
        
    }
    return 0;
}