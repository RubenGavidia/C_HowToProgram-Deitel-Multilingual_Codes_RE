/*Escriba un programa que despliegue el siguiente patrón en la pantalla:
* * * * * * * * 
 * * * * * * * *  
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
El programa sólo debe utilizar tres instrucciones de salida, una de cada una de las siguientes formas:
printf( “* “);
printf( “ “);
printf( “\n“);
*/
# include <stdio.h>
int main(){

  int contador = 1;
  int n = 0;
  int tam = 64;
  int y = 0;

  		while ( contador <= tam ) {
    	n = contador % 8; //cuando contador valga 8, 16, 24, 32, 40, 48, 63. Imprime salto de linea

    	y = contador % 16 -8; // cuando contador valga 8 , 24 y 40 .Imprime " " ya que con estos valores de contador da 0.

    	printf( "* " );// se toma en cuenta el espacio 

    		if ( n == 0 ) {
      		printf( "\n" );
    		}

    		if ( y == 0 ) {
      		printf( " " );
    		}

    	contador++;

  		}

  return 0;
}
