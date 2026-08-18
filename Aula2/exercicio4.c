#include<stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float peso;
    float agua_ml;
    float agua_litros;

    printf("Digite a massa corporal (em kg):\n");
    scanf("%f", &peso);

    agua_ml = peso * 35;
    agua_litros = agua_ml / 1000;

    printf("Quantidade aproximada de agua recomendada por dia: %.1f litros\n", agua_litros);
    return 0;

}
