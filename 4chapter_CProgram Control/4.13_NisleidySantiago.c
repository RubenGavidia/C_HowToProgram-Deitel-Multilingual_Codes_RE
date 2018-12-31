/*(Calculating the Product of Odd Integers) Write a program that calculates and
prints the product of the odd integers from 1 to 15.
Escriba un programa que calcule e imprima el producto de los enteros del 1 al
 15*/
#include <stdio.h>
int main(){
	int i;
	long long producto = 1;

	for(i = 1; i <= 15; i++){
		producto = producto * i;
	}
	printf("el producto es %lli : ", producto);
	return 0;
}
