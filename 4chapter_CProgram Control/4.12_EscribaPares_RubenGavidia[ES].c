/*4.12 Escriba un programa que calcule e imprima la suma de los enteros pares del 2 al 30.
*/
#include<stdio.h>

int main(){

int i=0,a=2,sum;
while(a<=30){
printf("a=%d\n",a);
sum+=a;
a+=2;
i++;
}
printf("A Medio Dos Enteiros É: %d",sum);
}
