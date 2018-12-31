/*Escriba una instrucción en C para llevar a cabo cada una de las siguientes tareas:
a) Defina las variables suma y x de tipo int.
b) Inicialice la variable x en 1 .
c) Inicialice la variable suma en 0 .
d) Sume la variable x a la variable suma y asigne el resultado a la variable suma.
e) Imprima “La suma es: ” seguida del valor de la variable suma.
Combine las instrucciones que escribió en el ejercicio 3.4 dentro de un programa que calcule la suma de los ente-
ros 1 a 10. Utilice la instrucción while para hacer un ciclo con las instrucciones para el cálculo y el incremento.
El ciclo deberá terminar cuando el valor de x sea 11.*/

#include <stdio.h>
int main(){
	int suma = 0;
	int x = 1;

	while(x <= 10){
		suma = suma + x;
		++x;
	}

printf("la suma de los numeros del 1 al 10 es : %d \t \n", suma);
return 0;
}
