#include<stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float semanas;
    float dias;
    float meses;

    printf("Qual a quantidade de semanas de gestação?");
    scanf("%f", &semanas);

    dias = semanas*7;
    meses = dias/30;

    printf("Tempo de gestação aproximado: %.1f meses\n", meses);

    return 0;
}

