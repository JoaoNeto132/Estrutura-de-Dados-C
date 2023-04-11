//Ex 6//
#include <stdio.h>
 
int main(){
    
    float largura, comprimento, area;
 
    printf("A largura é: "); 
    scanf("%f", &largura);
    comprimento=largura;
    area = largura * comprimento;
    printf("AREA = %f m2 \n", area);
}