/*4.11 Escriba un programa que encuentre el menor de varios enteros. Suponga que el primer valor a leer especifica el número de valores restantes.
*/
#include <stdio.h>
int main(){
	int n;
	int contador = 1;
	int suma = 0;
	int numero;
	int menor = 0;

printf("Introduzca el primer valor\n");
scanf("%d", &n);

printf("Introduzca los %d valores restantes :\n", n);
	if(menor < n){
		menor = n;
	}


	while(contador <= n){
		printf("Introduzca el #%d valor\n", contador);
		scanf("%d", &numero);
			if(numero < menor){
				menor = numero;
			}

		contador ++;
	}
printf("el menor es :%d\n", menor);

return 0;
}