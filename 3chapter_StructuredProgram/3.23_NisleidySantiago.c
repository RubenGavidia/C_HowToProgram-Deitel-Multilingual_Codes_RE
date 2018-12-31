/*El proceso para encontrar el número más grande (es decir, el máximo de un grupo de números) se utiliza con frecuencia en aplicaciones para computadora. Por ejemplo, un programa que determina el ganador de un concurso de unidades vendidas por cada vendedor. El vendedor que vende el mayor número de unidades gana. Escriba un programa en pseudocódigo y posteriormente un programa que introduzca una serie de 10 números y determine e imprima el mayor de éstos. [Clave: Su programa debe utilizar tres variables de la siguiente manera]:
-contador:
-numero:
-mayor:
*/
#include <stdio.h>
int main(){
	int contador = 1;
	int numero;
	int mayor = 0;

	while(contador <= 10){
		printf("Introduzca el %d° numero : \n", contador);
		scanf("%d", &numero);
			if(numero > mayor){
				mayor = numero;
			}
		contador = contador + 1;

	}
printf("EL MAYOR ES : %d \n", mayor);

return 0;
}
