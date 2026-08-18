#include<stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    float raio;
    float pi = 3.14;
    float perimetro;

    printf("Qual a medida do raio (em cm)?\n");
    scanf("%f", &raio);
    perimetro = 2*pi*raio;
    printf("O perimetro da circunferência e %.2f cm\n", perimetro);

    return 0;
}
