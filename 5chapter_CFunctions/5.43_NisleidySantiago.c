/*//What does the following program do?
#include <stdio.h>
unsigned int mystery( unsigned int a, unsigned int b ); // function prototype

// function main begins program execution
int main( void ){

unsigned int x; // first integer
unsigned int y; // second integer

printf( "%s", "Enter two positive integers: " );
scanf( "%u%u", &x, &y );
printf( "The result is %u\n", mystery( x, y ) );
} // end main

// Parameter b must be a positive integer
// to prevent infinite recursion
unsigned int mystery( unsigned int a, unsigned int b ){

// base case
if ( 1 == b ){
return a;
} // end if

else { // recursive step
return a + mystery( a, b - 1 );
} // end else
} // end function mystery
-----------------------------------------------------------*/
#include <stdio.h>

int misterio( int a, int b ); /* prototipo de función */
 /* la función main comienza la ejecución del programa */
 int main(){

int x; /* primer entero */
int y; /* segundo entero */

printf( "Introduzca dos enteros: " );
scanf( "%d%d", &x, &y );
printf( "El resultado es %d\n", misterio( x, y ) );

return 0; /* indica terminación exitosa */
 } /* fin de main */

 /* El parámetro b debe ser un entero positivo
para evitar la recursividad infinita */
 int misterio( int a, int b )
 {

/* caso base */
if ( b == 1 ) {
return a;

} /* fin de if */

else { /* paso recursivo */

return a + misterio( a, b - 1 );
} /* fin de else */

} /* fin de la función misterio */

//ANSWER:
/*es una funcion que realiza la multiplicacion de dos enteros por medio de una suma recursiva . al final se sumaran todas las a obtenidas de cada vez que la funcion recursiva es llamada y se suma con la a del primer if cuando b toma el valor de 1.
