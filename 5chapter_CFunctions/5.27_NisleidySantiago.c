/*5.27 (Prime Numbers) An integer is said to be prime if it’s divisible by only 1 and itself. For example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.
a) Write a function that determines whether a number is prime.
b) Use this function in a program that determines and prints all the prime numbers between 1 and 10,000. How many of these 10,000 numbers do you really have to test before being sure that you have found all the primes?
c) Initially you might think that n /2 is the upper limit for which you must test to see whether a number is prime, but you need go only as high as the square root of n . Rewrite the program, and run it both ways. Estimate the performance improvement.
----------------------------------------------------------------------
Se dice que un entero es primo si sólo es divisible entre 1 y entre sí mismo. Por ejemplo, 2, 3, 5 y 7 son primos, pero 4, 6, 8 y 9 no lo son.
a) Escriba una función que determine si un número es primo.
b) Utilice esta función en un programa que determine e imprima todos los números primos entre 1 y 10,000.
¿Cuántos de estos 10,000 números tiene que verificar realmente antes de que esté seguro de que encontró todos los números primos?
c) Inicialmente podría usted pensar que n/2 es el límite máximo que debe probar para ver si un número es primo,pero sólo necesita ir tan arriba como la raíz cuadrada de n. ¿Por qué? Rescriba el programa, y ejecútelo de ambas maneras. Estime la mejora en el rendimiento.
/*
# include<stdio.h>
  int primo(int number);

/*a)  int main(){
    int n;
    printf("Introduzca un numero:\n");
    scanf("%d", &n);
    primo(n);
}
int primo (int number){
  int a = 2, b = 3, c = 5, d = 7;

  if((number == 2) || (number == 3) || (number == 5) || (number == 7)){
    printf("Es Primo\n");
  }

  else if((number % 2 == 0) || (number % 3 == 0) || (number % 5 == 0) || (number % 7 == 0)){
    printf("No es primo\n");
  }
  else{
    printf("Es primo\n");
  }
}
*/

//b)
/*
int main(){
  int i;
  printf("Los numeros primos del 1 al 10,000 son:\n");
  for(i = 1; i <= 10000; i++){
    primo(i);
  }
}

  int primo (int number){
    int a = 2, b = 3, c = 5, d = 7;

    if((number == 2) || (number == 3) || (number == 5) || (number == 7)){
      printf("%i,\t", number);
    }

    else if((number % 2 == 0) || (number % 3 == 0) || (number % 5 == 0) || (number % 7 == 0)){
    //  printf("No es primo\n");
    }
    else{
      //es primo
      printf("%i,\t", number);
    }
  }
//respuesta: los numeros primos del 1 al diez
*/
//c)
#include <stdio.h>
#include <math.h>

int primo( int number);
int main(){
    int n;
    for(n = 1; n <= 10000; n++)
        primo(n);

    return 0;
}
int primo( int number ){
    int high = sqrt(number);
    int i;

    if(number <= 2) {
        printf("%d,\t", number);
        return 1;
    }

    if(number % 2 == 0)
        return 0;

    for(i = 3; i <= high; i += 2){
        if(number % i == 0)
           return 0;
    }

    printf("%d ,\t", number);
    return 1;
}
