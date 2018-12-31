/*Escriba un programa que despliegue 100 asteriscos, uno a la vez. Después de cada diez asteriscos, el programa debe desplegar un carácter de nueva línea. [Pista: Cuente de 1 a 100. Utilice el operador módulo para reconocer cada vez que el contador alcance un múltiplo de 10.]
*/

# include <stdio.h>
int main(){
	
	int linea = 1;
	int n = 0;
	int tam = 100;

	while(linea <= tam){
			n = linea % 10;
			printf("*");

			if(n == 0){
			printf("\n");
			}
	linea++;
	}

return 0;
}
