//Ex 9//
#include <stdio.h>

int main(){
  float area,lado1,lado2; 

  printf("informe a diagonal maior: ");
  scanf("%f", &lado1);
  printf("informe a diagonal menor: ");
  scanf("%f", &lado2);
  area = lado1 * lado2/2;
  printf("Area do losango é = %f m2 \n",area);
}