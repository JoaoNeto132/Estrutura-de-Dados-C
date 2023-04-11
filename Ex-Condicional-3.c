//Ex 3//
#include <stdio.h>
#include <math.h>

int main() {
  int num, potencia, base;
  printf("Digite o numero inteiro: ");
  scanf("%d", &base);
  printf("Digite um numero inteiro não negativo:");
  scanf("%d", &potencia);
  num = pow(base,potencia);
  printf("Resultado: %d \n", num );
}