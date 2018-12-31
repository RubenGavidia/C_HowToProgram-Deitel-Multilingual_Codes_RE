/*Para el siguiente programa, establezca el alcance (si es alcance de función, de archivo, de bloque o de prototipo de función) de cada uno de los siguientes elementos.
a) La variable x en main.
b) La variable y en cubo.
c) La función cubo.
d) La función main.
e) El prototipo de la función para cubo.
f) El identificador y en el prototipo de la función cubo.*/

#include <stdio.h>

int cubo( int y );//e)alcance de archivo en el prototipo de la funcion cubo, f) alcance de prototipo de funcion :y
int main( ){ //d) alcance de archivo
  int x;// a) alcance de bloque
    for ( x = 1; x <= 10; x++ )
      printf( "%d\n", cubo( x ) );
return 0;
}

int cubo( int y ){// c)alcance de archivo
return y * y * y; //b) alcance de bloque
}

//alcance de bloque: variables
//alcance de archivo: declaracion de funciones
