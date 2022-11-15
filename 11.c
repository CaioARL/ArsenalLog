#include <stdio.h>
int main()
{
    int dia, diaF, hora, horaF, minuto, minutoF, segundo, segundoF;

    scanf("Dia %d", &dia);
    scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
    scanf("Dia %d", &diaF);
    scanf("%d : %d : %d", &horaF, &minutoF, &segundoF);

    segundo = segundoF - segundo;
    minuto = minutoF - minuto;
    hora = horaF - hora;
    dia = diaF - dia;

    if (segundo < 0)
    {
        segundo += 60;
        minuto--;
    }

    if (minuto < 0)
    {
        minuto += 60;
        hora--;
    }

    if (hora < 0)
    {
        hora += 24;
        dia--;
    }

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", minuto);
    printf("%d segundo(s)\n", segundo);
}