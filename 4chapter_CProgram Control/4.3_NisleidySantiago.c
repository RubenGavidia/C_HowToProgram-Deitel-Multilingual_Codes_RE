/*Escriba una instrucción o un conjunto de instrucciones para realizar las siguientes tareas:
	a) Sume los enteros impares entre 1 y 99, utilizando una instrucción for. Suponga que las variables enteras suma y cuenta ya fueron declaradas.
	b) Imprima el valor 333.546372 en un ancho de campo de 15 caracteres con precisiones de 1, 2, 3, 4 y 5. Justifique hacia la izquierda la salida. ¿Cuáles son los valores que despliega?
	c) Calcule el valor de 2.5 elevado a la tercera potencia, utilizando la función pow. Imprima el resultado con una precisión de 2, en un ancho de campo de 10 posiciones. ¿Cuál es el valor que despliega?
	d) Imprima los enteros del 1 al 20, utilizando un ciclo while y la variable contador x. suponga que la variable x ya fue declarada, pero no inicializada. Imprima sólo cinco enteros por línea. [Pista: Utilice el cálculo x % 5.Cuando el valor de éste sea 0, imprima un carácter de nueva línea, cuando sea diferente imprima un carácter
	tabulador.]
	e) Repita el ejercicio 4.3 (d), utilizando una instrucción for.
*/

						//a)
/*
#include <stdio.h>
int main(){

	int suma;
	int cuenta = 0;
	int i;
	for(suma = 1; suma <= 99; suma += 2){
		cuenta = cuenta + suma;
	}
	printf("la suma es %d:\n", cuenta);
return 0;
}
*/

						//b)
/*#include <stdio.h>
int main(){
	double n = 333.546373;

	printf("%15s %15s\n", "salida", "valor");
	printf("%15.1f %15f\n", n, n);
	printf("%15.2f %15f\n", n, n);
	printf("%15.3f %15f\n", n, n);
	printf("%15.4f %15f\n", n, n);
	printf("%15.5f %15f\n", n, n);

return 0;
}
*/

						//c)
/*
#include <stdio.h>
#include <math.h>

int main(){
	float n = 2.5;
	float r = 0;

	r = pow (2.5, 3);
	printf("el resultado es: %10.2f \n", r);
	return 0;
}
*/

						//d)
/*
#include <stdio.h>
int main(){
	int x = 1;

	while(x<= 20){
		//printf("%d \n", x);
		if(x % 5 == 0){
			printf("%d\n", x);
		}
		if(x % 5 != 0){
			printf("%d\t", x);
		}
		x+=1;
	}

return 0;
}
*/

							//e)
#include <stdio.h>
int main(){
	int x;

	for(x = 1; x<= 20; x++){
		//printf("%d \n", x);
		if(x % 5 == 0){
			printf("%d\n", x);
		}
		if(x % 5 != 0){
			printf("%d\t", x);
		}
	}

return 0;
}