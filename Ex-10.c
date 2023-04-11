//Ex 10//
#include <stdio.h>

int main(){
 float salario, imposto;
 
  printf("Informe o valor do seu salário: ");
  scanf("%f", &salario);
  imposto = (salario * 0.05);
  printf("O valor do imposto de renda é: %.2f \n",imposto);
}