/*(Factorials) The factorial function is used frequently in probability problems. The factorial of a positive integer n (written n! and pronounced “n factorial”) is equal to the product of the positive integers from 1 to n. Write a program that evaluates the factorials of the integers from 1 to 5. Print the results in tabular format. What difficulty might prevent you from calculating the factorial of 20?

A menudo, la función factorial se utiliza en problemas de probabilidad. El factorial de un entero positivo n (se escribe n! y se pronuncia “n factorial”) es igual al producto de los enteros positivos de 1 a n. Escriba un programa que evalúe los factoriales de los enteros de 1 a 5. Imprima los resultados de manera tabular. ¿Qué dificultad debe usted prever al calcular el factorial de 20? */

#include <stdio.h>
int main()
{
  int b, i, fact = 1;

	for(i = 1; i <= 5; i++){
		fact = 1;
  			for (b = i; b > 1; b--){
    		fact = fact * b;
			}
 		printf("El factorial de %4d = %4d\n", i, fact);
	}  
return 0;
}	
