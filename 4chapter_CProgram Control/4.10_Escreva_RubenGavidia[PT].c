/*4.10 Escreva um programa que calcule e imprima a média de vários inteiros. Admita que o último
valor lido com scanf é o sentinela 9999. Uma seqüência típica de entrada poderia ser
10 8 11 7 9 9999
indicando que a média de todos os valores que aparecem antes de 9999 deve ser calculada.
*/
#include<stdio.h>

int main(){

int i=0,a,suma=0;
float average=0;
printf("Ingrese Os Enteiros Para para obter sua média (9999 para Sair)\n");
scanf("%d",&a);
while(a != 9999){
suma+=a;
i++;
scanf("%d",&a);
}
average=(float)suma/i;
printf("A Medio Dos Enteiros É: %f",average);

}
