// Exercise 3.33
// (Square Asterisks) Write a program that reads in the side of a square and
// then prints that square out of asterisks. Your program should work for
// squares of all side sizes between 1 and 20. For example, if your program
// reads a size of 4, it should print:
// ****
// ****
// ****
// ****

#include <stdio.h>

int main() {
  int linea = 1, tam, asterisco;

  printf("What size is your square?\n");
  scanf("%d", &tam );

  while (linea <= tam) {
    asterisco = 1;
    while (asterisco <= tam) {
      printf("*");
      asterisco++;
    }
    printf("\n");
    linea++;
  }

  return 0;
}
