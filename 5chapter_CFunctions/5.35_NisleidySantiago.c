/*5.35
(Fibonacci) The Fibonacci series
0, 1, 1, 2, 3, 5, 8, 13, 21, ... begins with the terms 0 and 1 and has the property that each succeeding term is the sum of the two preceding terms. a) Write a nonrecursive function fibonacci(n) that calculates the n th Fibonacci number. Use unsigned int for the function’s parameter and unsigned long long int for its returntype. b) Determine the largest Fibonacci number that can be printed on your system.
--------------------------------------------------------------------------
La serie de Fibonacci
0, 1, 1, 2, 3, 5, 8, 13, 21, ...
comienza con los términos 0 y 11, y tiene la propiedad de que cada término sucesivo es la suma de los dos términos precedentes.
a) Escriba una función no recursiva fibonacci(n) que calcule el enésimo número de Fibonacci.
b) Determine el número de Fibonacci más grande que se puede imprimir en su sistema. Modifique el programa del inciso a) para utilizar un número double en lugar de un int para calcular y devolver los números de Fibonacci. Permita que el programa haga un ciclo hasta que falle debido a que excede el valor más alto.*/

# include <stdio.h>
int fibonacci(int numero);
int main(){
  int n;
  printf("Introduzca el enesimo numero para la serie de fibonacci :\n");
  scanf("%d", &n);
  printf("la serie de fibonacci es:\n");
  fibonacci(n);
}
int fibonacci(int numero){
  int a = 0;
  int b = 1;
  int r = 0;
  int sum = 0;

  if(numero == 0)
    printf("%d ", a);

  else if(numero == 1)
  printf("%d, %d,", a, b);

  else if(numero > 1){
    while (sum <= numero){
        printf("%d, ", r);
                sum = r + b;
                if (sum > numero)
                break;

                else{
                printf("%d, ", sum);
                    a = r;
                    b = sum;
                    r = a + b;
                    sum = r;
      }
    }
  }
}
