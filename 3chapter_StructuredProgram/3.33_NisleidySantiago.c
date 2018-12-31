/// Exercise 3.34
// (Hollow Square of Asterisks) Modify the program you wrote in 3.33 so that it
// prints a hollow square.
// 0123        line       side = 4
// ****         0
// *  *         1
// *  *         2
// ****         3         side - 1

#include <stdio.h>

int main() {
  
  int linea = 1, tam, asteriscos;

  printf("Introduzca el tamaño del cuadro\n");
  scanf("%d", &tam );

  while (linea <= tam) {
    asteriscos = 1;
    while (asteriscos <= tam) {
      if ( linea == 1 || linea == tam || asteriscos == 1 || asteriscos == tam) {
        printf("*");
      } else {
        printf(" ");
      }
      asteriscos++;
    }
    printf("\n");
    linea++;
  }

  return 0;
}
