/*Mediante un método similar al del ejercicio 3.24, encuentre los dos valores más grandes de los 10 números. [Nota:
Debe introducir un número a la vez.*/

#include <stdio.h>
int main(){
	int contador = 1;
	int numero = 0;
	int mayor1 = 0;
	int mayor2 = 0;

	while(contador <= 10){
		printf("Introduzca el %d° numero : \n", contador);
		scanf("%d", &numero);

			if(numero > mayor1){
				mayor2 = mayor1;
				mayor1 = numero;
			}
				if(numero < mayor1){
					if(numero > mayor2){
					mayor2 = numero;
					}
				}

		contador = contador + 1;
	}
	
printf("los dos numeros mayores son : %d %d\n", mayor1, mayor2);

return 0;
}
