/*5.37 (Towers of Hanoi: Iterative Solution) Any program that can be implemented recursively can be implemented iteratively, although sometimes with considerably more difficulty and considerably less clarity. Try writing an iterative version of the Towers of Hanoi. If you succeed, compare your iterative version with the recursive version you developed in Exercise 5.36. Investigate issues of performance, clarity, and your ability to demonstrate the correctness of the programs.
---------------------------------------------------------------------
Cualquier programa que puede implementarse de manera recursiva, puede implementarse de manera iterativa, sin embargo, en ocasiones con una considerable dificultad y menor caridad. Intente escribir una versión iterativa de las Torres de Hanoi. Si tiene éxito, compare su versión iterativa con la versión recursiva desarrollada en el ejercicio 5.39.
Investigue los problemas de rendimiento, claridad, y su habilidad para demostrar la eficiencia de los programas.*/


#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
   if (n == 1)
   {
       printf("\n mover disco 1 a barra %c to barra %c", from_rod, to_rod);
       return;
   }
   towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
   printf("\n mover disco %d de la barra %c a la barra %c", n, from_rod, to_rod);
   towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main()
{
   int n; // Number of disks
   printf("Introduzca el numero de discos:\n");
   scanf("%d", &n);

   towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
   return 0;
}
