/*El factorial de un número entero positivo n se escribe n! (que se pronuncia “n factorial”) y se define como:
n! = n · (n - 1) · (n - 2) · ... · 1 (para valores de n mayores o iguales que 1)
y
n! = 1 (para n = 0)
Por ejemplo, 5! = 5 · 4 · 3 · 2 · 1, que es igual a 120.
a) Escriba un programa que lea un entero positivo y que calcule y despliegue su factorial.
b) Escriba un programa que estime el valor de la constante matemática e, mediante el uso de la fórmula:
c) Escriba un programa que calcule el valor de e x mediante el uso de la fórmula:
*/

								// a)
/*
#include <stdio.h>
int main(){

	int n;
	int factorial = 1;
	int factor ;

	printf("enter a positive number : \n");
	scanf("%d", &n);
	factor = n;

		while (n < 0) {
		printf("enter a POSITIVE number: \n");
		scanf("%d", &n);
    	}

				while(n != 0){
				factorial = factorial * n;
				n--;

				}


printf("%d! is =  %d \n", factor, factorial);

return 0;
}
*/

								//b)

#include <stdio.h>
int main(){

	float factorial = 1;
	int n;
	float divisor;
	float e = 1;
	int a;

	printf("introduzca el valor n, que pertenece al intervalo [0, n) \n");
	scanf("%d", &n);

	while (n < 0) {
		printf("enter a POSITIVE number: \n");
		scanf("%d", &n);
    	}

	while(0 != n){
		a = n;
		factorial = 1;
		divisor = 0;
			 
			while(0 != a){
			factorial = factorial * a;
			divisor = 1 / factorial;
			a--;
			}

		e = e + divisor;
		n--;
		}

printf(" value aproximatly of e is : %f\n", e);

return 0;
}

								//c

/*#include <stdio.h>
int main(){

	float factorial = 1;
	int n;
	float divisor;
	float e = 1;
	int a;
	int x;
	int producto = 1;

	printf("introduzca el valor n, que pertenece al intervalo [0, n) \n");
	scanf("%d", &n);

		while (n < 0) {
			printf("enter a POSITIVE number: \n");
			scanf("%d", &n);
    		}

	printf("Enter value of x : \n");
	scanf("%d", &x);

		while(0 != n){
			a = n;
			factorial = 1;
			divisor = 0;
			producto = 1;
			 
				while(0 != a){
				factorial = factorial * a;
				producto = producto * x;
				divisor =  producto / factorial;
				a--;
				}

		e = e + divisor;
		n--;
		}

printf(" Value aproximatly of e ^ x is: %f\n", e);

return 0;
}
*/
