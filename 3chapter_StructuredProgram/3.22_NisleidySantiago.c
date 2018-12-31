/*Escriba un programa que utilice un ciclo para imprimir los números 1 a 10 dentro de la misma línea, separados cada uno por tres espacios en blanco.*/

#include <stdio.h>
int main(){
	int numeros = 0;
printf("NUMEROS DEL 1 AL 10 \n");
	while (numeros <= 9){
		numeros = numeros + 1;
		printf("%d   ", numeros);
	}
printf("\n\n");
return 0;
}
