//Ex 2//
#include <stdio.h>

int main()
{
    float numero;
    printf("Informe um número real: ");
    scanf("%f*c", & numero);

    printf("Parte inteira: %d\n", (int) numero);
    printf("Parte decimal: %f\n", numero - ((int)numero));
    printf("Arredondado: %d\n", (int)round(numero));
}

