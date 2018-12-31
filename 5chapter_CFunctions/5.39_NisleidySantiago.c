/*(Recursive Greatest Common Divisor) The greatest common divisor of integers x and y is the largest integer that evenly divides both x and y . Write a recursive function gcd that returns the greatest common divisor of x and y . The gcd of x and y is defined recursively as follows: If y is equal to 0 , then gcd(x, y) is x ; otherwise gcd(x, y) is gcd(y, x % y) , where % is the remainder operator.
----------------------------------------------------------------------
El máximo común divisor de los enteros x y y es el entero más grande que divide tanto a x como a y. Escriba una función recursiva mcd que devuelva el máximo común divisor de x y y. El mcd de x y y se define de manera recursiva de la siguiente manera: si y es igual a 0, entonces mcd(x, y) es x, de lo contrario mcd(( x, y ) es mcd( y, x%y ), en donde % es el operador módulo.
*/
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
  if(n1 % n2 == 0)
      return n2;
  else
      return MCD(n2, n1 % n2);
}
