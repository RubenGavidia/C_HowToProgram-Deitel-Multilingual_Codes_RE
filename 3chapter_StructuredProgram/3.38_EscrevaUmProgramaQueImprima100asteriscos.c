/*3.38 Escreva um programa que imprima 100 asteriscos, um de cada vez. A cada dez
asteriscos, seu programa deve imprimir um caractere de nova linha. (Sugest�o:
Conte de 1 a 100. Use o operador resto para reconhecer cada vez que o contador
atingir um m�ltiplo de dez.)*/

#include<stdio.h>

int main(){
    
    int n=1;

    while(n<=100){
            printf("*");
            if(n%10==0) printf("\n");
            n++;
    }
}
