int main()
{
    int dia_ini, dia_fim;
    int tot_dias;
    int tot_horas;
    int tot_minutos;
    int tot_segundos;

    int hora_ini, minuto_ini, segundo_ini;
    int hora_fim, minuto_fim, segundo_fim;

    scanf("Dia %d", &dia_ini);
    scanf("%d : %d : %d\n", &hora_ini, &minuto_ini, &segundo_ini);
    scanf("Dia %d", &dia_fim);
    scanf("%d : %d : %d", &hora_fim, &minuto_fim, &segundo_fim);

    tot_dias = dia_fim - dia_ini;
    tot_horas = hora_fim - hora_ini;
    tot_minutos = minuto_fim - minuto_ini;
    tot_segundos = segundo_fim - segundo_ini;

    if (tot_horas < 0)
    {
        tot_horas += 24;
        tot_dias -= 1;
    }
    if (tot_minutos < 0)
    {
        tot_minutos += 60;
        tot_horas -= 1;
    }
    if (tot_segundos < 0)
    {
        tot_segundos += 60;
        tot_minutos -= 1;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", tot_dias, tot_horas, tot_minutos, tot_segundos);
    return 0;
}