//Ex 5//
#include <stdio.h>

int main()
{
    float salarioFunc;
    float salarioMin = 1320;

    printf("Informe seu salário: ");
    scanf("%f", & salarioFunc);
    printf("A quantidade de salários mínimos é: %f\n", salarioFunc/salarioMin);
}