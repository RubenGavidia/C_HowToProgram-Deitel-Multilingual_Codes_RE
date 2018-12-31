/*(Calculating the Sum of Even Integers) Write a program that calculates and prints the sum
of the even integers from 2 to 30.
Escriba un programa que calcule e imprima la suma de los enteros pares del 2 al 30.*/
#include <stdio.h>
int main(){
	int n, i, suma = 0;
	for(i = 2; i <= 30; i = i + 2){
		printf("numeros %d \n:", i);
		suma = suma + i; 
	}
	printf("la suma es %d :\n ", suma);
return 0;
}