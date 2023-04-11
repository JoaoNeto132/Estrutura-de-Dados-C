//Ex 11//
#include <stdio.h>

int main() {
    int num1, num2, num3, menor, maior;
    printf("Digite tres valores: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    menor = num1;
    maior = num1;
    if(menor > num2)
        menor = num2;
    if(menor > num3)
        menor = num3;
    if(maior < num2)
        maior = num2;
    if(maior < num3)
        maior = num3;
    printf("Menor: %d\tMaior: %d\n", menor, maior);
}

//Ex 12//
#include <stdio.h>

int main() {
  int num1, num2;

  printf("Informe o 1 valor: ");
  scanf("%d", &num1);

  printf("Informe o 2 valor: ");
  scanf("%d", &num2);

  if ((a % b) == 0)
     printf("\n\n%d e %d sao multiplos.", num1, num2);
  else
     printf("\n\n%d e %d nao sao multiplos.", num1, num2);
}

//Ex 13//
#include <stdio.h>

int main(){
int idade;
printf("Digite a idade: ");
scanf("%d",&idade);
if(idade < 8) printf("infantil A");
else if(idade < 11) printf("infantil B");
else if(idade < 14) printf("juvenil A");
else if(idade < 18) printf("juvenil B");
else printf("Adulto\n");
}

//Ex 14//
#include <stdio.h>

int main(){
int codigo, quantidade;
float preco;
printf ("Digite o código do produto:");
scanf ("%d", &codigo);
if (codigo>=100 && codigo<= 105)
{
printf ("Digite a quantidade:");
scanf ("%d", &quantidade);
if (codigo==100 || codigo==103)
preco=quantidade*1.2;
else if (codigo==101 || codigo==104)
preco=quantidade*1.3;
else if (codigo==102)
preco=quantidade*1.5;
else if (codigo==105)
preco=quantidade *1.0;
printf ("Total a pagar: %.2f", preco);}
else printf ("Código inválido.");
}

//Ex 15//
#include <stdio.h>

int main(){

    float altura, peso = 0.0;
    int sexo;

    printf("Informe a sua altura: ");
    scanf("%f", & altura);
    printf("Informe M para masculino e F para feminino: ");
    scanf("%d", & sexo);

    if(sexo == 'M'){
        peso = ((72.7 * altura) - 58);
        printf("O seu peso ideal é: %3.f", peso);
    }
    else if(sexo == 'F'){
        peso = ((62.1 * altura) - 44.7);
        printf("O seu peso ideal é: %.3f", peso);
    }
    else{
        printf("Erro!");
    }
}

//Ex 16//
#include<math.h>
#include<stdio.h>

int main(){

float precototal;
char cod_produto[10];
int quantidade;

scanf("%s",cod_produto);
scanf("%d",&quantidade);

if (strcmp(cod_produto,"ABCD") == 0 ){
precototal = 5.30 * quantidade;
printf("PRECO TOTAL = %.2f\n",precototal);
}

else if (strcmp(cod_produto,"XYKT") == 0 ){
precototal = 6.80 * quantidade;
printf("PRECO TOTAL = %.2f\n",precototal);
}

else if (strcmp(cod_produto,"BTSD") == 0 ){
precototal = 2.50 * quantidade;
printf("PRECO TOTAL = %.2f\n",precototal);
}

else if (strcmp(cod_produto,"YPOV") == 0 ){
precototal = 6.57 * quantidade;
printf("PRECO TOTAL = %.2f\n",precototal);
}

else {
printf("ENTRADA INVALIDA\n");
}	
}

//Ex 17//
#include<stdio.h>
#include<math.h>

int main(){
  int i, a, b, c;
    printf("Escreva um numero de 1 a 3: ");
	scanf("%d", &i);
	printf("Escreva 3 numeros reais:");
	scanf("%d%d%d", &a, &b, &c);
	if (i == 1){
		if (a > b && a > c && b > c){
			printf("A ordem crecente é: %d e %d e %d",c,b,a);
		}
 		else if (a > b && a > c && c > b){
			printf("A ordem crecente é: %d e %d e %d",b,c,a);
		}
		else if ( b > a && b > c && a > c){
			printf("A ordem crecente é: %d e %d e %d",c,a,b);
		}
		else if ( b > a && b > c && c > a){
			printf("A ordem crecente é: %d e %d e %d",a,c,b);
		}
		else if ( c > a && c > b && b > a){
			printf("A ordem crecente é: %d e %d e %d",a,b,c);
		}
		else if ( c > a && c > b && a > b){
			printf("A ordem crecente é: %d e %d e %d",b,a,c);
		}
	}
	if (i == 2){
		if (a < b && a < c && b < c){
			printf("A ordem decrecente é: %d e %d e %d",c,b,a);
		}
		else if (a < b && a < c && c < b){
			printf("A ordem decrecente é: %d e %d e %d",b,c,a);
		}
		else if ( b < a && b < c && a < c){
			printf("A ordem decrecente é: %d e %d e %d",c,a,b);
		}
		else if ( b < a && b < c && c < a){
			printf("A ordem decrecente é: %d e %d e %d",a,c,b);
		}
		else if ( c < a && c < b && b < a){
			printf("A ordem decrecente é: %d e %d e %d",a,b,c);
		}
		else if ( c < a && c < b && a < b){
			printf("A ordem decrecente é: %d e %d e %d",b,a,c);
		}
	}
	if (i == 3){
		if (a < b && a < c && b < c){
			printf("O maior numero entre A B C fica no meio: %d e %d e %d",b,c,a);
		}
		else if (a < b && a < c && c < b){
			printf("O maior numero entre A B C fica no meio: %d e %d e %d",c,b,a);
		}
		else if ( b < a && b < c && a < c){
			printf("O maior numero entre A B C fica no meio: %d e %d e %d",a,c,b);
		}
		else if ( b < a && b < c && c < a){
			printf("O maior numero entre A B C fica no meio: %d e %d e %d",c,a,b);
		}
		else if ( c < a && c < b && b < a){
			printf("O maior numero entre A B C fica no meio: %d e %d e %d",b,a,c);
		}
		else if ( c < a && c < b && a < b){
			printf("O maior numero entre A B C fica no meio: %d e %d e %d",a,b,c);
		}
	}
}

//Ex 18//
#include <stdio.h>

    int main(){
    int n1, n2, n3;
    printf("Digite um numero positivo: ");
    scanf("%d", &n1);
    printf("Digite um segundo numero positivo: ");
    scanf("%d", &n2);
    printf("Digite um terceiro numero positivo: ");
    scanf("%d", &n3);
    if (n1 > n2 && n2 > n3);
        printf("%d%d%d", n1, n2, n3);
    else if (n1 > n3 && n3 > n2)
        printf("%d%d%d", n1, n3, n3);
    else if (n2 > n1 && n1 > n3)
        printf("%d%d%d", n2, n1, n3);
    else if (n2 > n3 && n3 > n1)
        printf("%d%d%d", n2, n3, n1);
    else if (n3 > n1 && n1 > n2)
        printf("%d%d%d", n3, n1, n2);
    else
        printf("%d%d%d", n3, n2, n1);
}

//Ex 19//
#include <stdio.h>

int main() {
    int anos, meses, dias, total;

    printf("Digite a idade da pessoa em anos, meses e dias: ");
    scanf("%d%d%d", &anos, &meses, &dias);
    
    total = anos*365 + meses*30 + dias;
    
    printf("A sua idade em dias é %d\n", total);
}

//Ex 20//
#include <stdio.h>

int main()
{
    int anos, meses, dias;

    printf("Digite a idade da pessoa em anos, meses e dias: ");
    scanf("%d", &anos);
    dias = anos*365;
    meses = anos*12;
    printf("Você tem %d anos ou %d meses ou %d dias", anos, meses, dias);
}