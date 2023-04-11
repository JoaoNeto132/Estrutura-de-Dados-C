#include <stdio.h>

int main () {
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