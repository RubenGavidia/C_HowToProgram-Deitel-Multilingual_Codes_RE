/*programa que lee tres enteros y que después imprime el número más grande y el más
 pequeño del grupo.
(Largest and Smallest Integers) Write a program that reads in three integers and then deter-
mines and prints the largest and the smallest integers in the group. Use only the programming tech-
niques you have learned in this chapter.
*/
#include <stdio.h>

int main () {

    int a, b, c;

    printf ("Introduzca 3 numeros enteros: ");
    scanf ("%d %d %d", &a, &b, &c);
    //validar el menor de numeros enteros

    if (((a < b) &&(b < c ))||( ( a < c ) && ( c < b )))
       printf ("\nEl menor es: %d\n\n", a);
    

    else if(((b < c) &&(c < a)) || (( b < a) && (a < c)))
    	printf ("\nEl menor es: %d\n\n", b);

    else if((( c < b) &&(b < a)) || (( c < a) && ( a < b)))
    	printf ("\nEl menor es: %d\n\n", c);

    // Validar el mayor de los numeros

    if (((a > b) &&(b > c ))||( ( a > c ) && ( c > b )))
       printf ("\nEl mayor es: %d\n\n", a);
    

    else if(((b > c) &&(c > a)) || (( b > a) && (a > c)))
    	printf ("\nEl mayor es: %d\n\n", b);

    else if((( c > b) &&(b > a)) || (( c > a) && ( a > b)))
    	printf ("\nEl mayor es: %d\n\n", c);


    return 0;

}
	
