#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");

    float ladoA;
    float ladoB;
    float perim;
    float area;

    printf("Digite o valor de um lado (em cm):");
    scanf("%f", &ladoA);

    printf("Digite o valor do outro lado (em cm):");
    scanf("%f", &ladoB);

    perim = 2*ladoA + 2*ladoB;

    printf("perim: %.2f cm\n", perim);
    area = ladoA * ladoB;

    printf("Área do retângulo: %.2f cm2\n", area);

    return 0;
}
