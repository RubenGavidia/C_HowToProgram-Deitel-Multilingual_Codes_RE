/*(Coin Tossing) Write a program that simulates coin tossing. For each toss of the coin the program should print Heads or Tails . Let the program toss the coin 100 times, and count the number of times each side of the coin appears. Print the results. The program should call a separate function flip that takes no arguments and returns 0 for tails and 1 for heads. [Note: If the program realistically simulates the coin tossing, then each side of the coin should appear approximately half the time for a total of approximately 50 heads and 50 tails.]
----------------------------------------------------------------------
Escriba un programa que simule un volado (el lanzamiento de una moneda). Por cada volado, el programa deberá imprimir Cara o Cruz. Permita que el programa lance la moneda 100 veces y cuente el número de veces que aparece cada lado de la moneda. Imprima los resultados. El programa debe llamar a una función aparte llamada resultado, la cual no tiene argumentos y devuelve 0 para Cara y 1 para Cruz. [Nota: Si el programa simula de manera realista el lanzamiento de monedas, entonces cada lado debe aparecer aproximadamente la mitad de las veces, para un total de 50 Caras y 50 Cruces.]*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int resultado();
int main(){
  srand( (time(NULL)) );
  int frecuencia1 = 0; //tiro 1 cara
  int frecuencia2 = 0; //tiro 2 cruz
  int moneda;

  int tiro; /* contador de tiros, valores de 1 a 100 */
  int cara; /* representa un tiro de la moneda, valores de 0 para cara , 1 para cruz) */

  /* repite 100 veces y resume los resultados */
    for ( tiro = 1; tiro <= 100; tiro++ ) {
      cara = resultado(); /* número aleatorio de 1 al 2 */
        /* determina el valor de cara e incrementa el contador apropiado */

        switch ( cara ){

        case 1: /* tiro 1 */
        ++frecuencia1;
        break;

        case 2: /* tiro 2 */
        ++frecuencia2;
        break;
        } /* fin de switch */

        if(cara == 1)
        printf("0\n");
        else
        printf("1\n");
    } /* fin de for */
    printf("\n\n");
    printf( "%s%13s\n", "Moneda", "Frecuencia");
    printf( "cara%13d\n", frecuencia1 );
    printf( "cruz%13d\n", frecuencia2 );
return 0; /* indica terminación exitosa */
}

int resultado(){
  return(1 + rand() % 2);
}
