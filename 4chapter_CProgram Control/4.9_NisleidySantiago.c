/*Escriba un programa que sume una secuencia de enteros. Asuma que el primer entero leído mediante scanf especifica el número de valores restantes que se introducirán. Su programa debe leer únicamente un valor cada vez
que se ejecuta scanf. Una secuencia de entrada típica podría ser
5
100
200
300
400
500
donde el 5 indica que se sumarán los cinco números subsiguientes.
*/
#include <stdio.h>
int main(){
	int n;
	int contador = 1;
	int suma = 0;
	int numero;

printf("Introduzca el la cantidad de veces a introducir un numero \n");
scanf("%d", &n);

	while(contador <= n){
		printf("Introduzca el numero #%d\n", contador);
		scanf("%d", &numero);
		suma = suma + numero;
		contador ++;
	}
printf("la suma es :%d\n", suma);
return 0;
}
