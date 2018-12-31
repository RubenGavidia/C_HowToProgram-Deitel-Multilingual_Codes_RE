/*3.44 Escreva um programa que leia tr�s valores float diferentes de zero e depois
determine e imprima se eles podem representar os lados de um tri�ngulo.
*********************************************
***mal escrito deve decir triangulo equilatero***
**************************************************


*/

#include<stdio.h>

int main(){
float a,b,c;

printf("Ingrese o valor de A\n");
scanf("%f",&a);
printf("Ingrese o valor de B\n");
scanf("%f",&b);
printf("Ingrese o valor de C\n");
scanf("%f",&c);

if(a==b && b==c && c==a) printf("Pode Representar um Triangulo Equilatero com os mesmos tamanhos dOS lados\n\n");

    else printf("Nao Pode Representar um Triangulo Equilatero Mas pode representar um Triangulo com diferentes lados\n\n");

}
