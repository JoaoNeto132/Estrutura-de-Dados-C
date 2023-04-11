//Ex 7//
#include <stdio.h>
 
int main(){
	float raio, pi=3.14, area;
	
	printf("O raio é: "); 
	scanf("%f", &raio);
	area = pi * raio * raio;
	printf("Area é = %f m2 \n", area);
}