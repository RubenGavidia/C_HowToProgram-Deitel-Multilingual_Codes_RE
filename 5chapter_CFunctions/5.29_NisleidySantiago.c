/*(Greatest Common Divisor) The greatest common divisor (GCD) of two integers is the largest integer that evenly divides each of the two numbers. Write function gcd that returns the greatest common divisor of two integers.
----------------------------------------------------------------------
El máximo común divisor (MCD) de dos enteros es el entero más grande que divide cada uno de los números. Escriba un programa mcd que devuelva el máximo común divisor de dos enteros.*/

///////////////////MCD CALCULADO CON FORMULA DE EUCLIDES/////////////
//que consiste en ir restando el número menor al mayor hasta obtener dos números iguales, momento en el cual tenemos el máximo común divisor.

# include <stdio.h>

int MCD (int n1, int n2);
int main(){

  int a, b;
  printf("Introduzca dos numeros:\n");
  scanf("%d\n%d", &a ,&b);
  printf("El MCD de %d y %d es: %d\n", a, b, MCD(a, b));
  return 0;
}

int MCD (int n1, int n2){
  int mcd;

	while(n1 != n2){
		if (n1 > n2)
		n1 = n1 - n2;
		else
		n2 = n2 - n1;
	}
	mcd = n1;
  return(mcd);
}
