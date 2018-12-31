/*Escriba un programa que utilice ciclos para imprimir la siguiente tabla de valores.
La secuencia de escape tabulador, \t, puede utilizarse en la instrucción printf para separar las columnas con ta-
buladores.*/

#include <stdio.h>
int main(){
int n = 1;
int b, c, d;

printf("\n n \t 10*n \t 100*n \t 1000*n");

	while(n <= 9){
		n = n + 1;
		b = 10 * n;
		c = 100 * n;
		d = 1000 * n;
		printf("\n %d \t %d \t %d \t %d", n, b, c, d);
	}
printf("\n \n");
return 0;
}
