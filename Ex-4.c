//Ex 4//
#include <stdio.h>
#include <math.h>

int main() {
 int numero, potencia, raiz;
 printf("Digite o numero: ");
 scanf("%d", &numero);
  potencia = pow(numero,2);
  raiz = sqrt(numero);
  printf("A potencia o numero é: %d \n", potencia);
  printf("A raiz do numero é: %d \n", raiz);
}