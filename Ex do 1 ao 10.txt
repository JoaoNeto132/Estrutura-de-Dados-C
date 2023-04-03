1-----
#include <stdio.h>

main () {
     float Deposito, taxa, Rendimento, RendimentoTotal=0;

     printf ("Informe o valor do deposito: ");
     scanf ("%f", &Deposito);
     printf ("Informe o valor das taxas de juros: ");
     scanf ("%f", &taxa);
     Rendimento=Deposito*(taxa/100);
     printf ("O valor do rendimento é: %f \n", Rendimento);
     RendimentoTotal=Deposito+Rendimento;
     printf ("O valor do rendimento final é: %f", RendimentoTotal);
}

2-----
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

3-----
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

4-----
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

5-----
#include <stdio.h>

int main()
{
    float salarioFunc;
    float salarioMin = 1320;

    printf("Informe seu salário: ");
    scanf("%f", & salarioFunc);
    printf("A quantidade de salários mínimos é: %f\n", salarioFunc/salarioMin);
}

6-----
#include <stdio.h>
 
int main(){
    
    float largura, comprimento, area;
 
    printf("A largura é: "); 
    scanf("%f", &largura);
    comprimento=largura;
    area = largura * comprimento;
    printf("AREA = %f m2 \n", area);
}

7-----
#include <stdio.h>
 
int main(){
	float raio, pi=3.14, area;
	
	printf("O raio é: "); 
	scanf("%f", &raio);
	area = pi * raio * raio;
	printf("Area é = %f m2 \n", area);
}

8-----
#include <stdio.h>

int main(){
    float base1, base2, area, altura;

    printf("Informe a base maior: ");
    scanf("%f", &base1);
    printf("Informe a base menor: ");
    scanf("%f", &base2);
    printf("Informe a altura: ");
    scanf("%f", &altura);
    area = ((base1 + base2) * altura) / 2;
    printf("A area do trapezio e: %f" m2, area);
}

9-----
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

10-----
#include <stdio.h>

int main(){
 float salario, imposto;
 
  printf("Informe o valor do seu salário: ");
  scanf("%f", &salario);
  imposto = (salario * 0.05);
  printf("O valor do imposto de renda é: %.2f \n",imposto);
}