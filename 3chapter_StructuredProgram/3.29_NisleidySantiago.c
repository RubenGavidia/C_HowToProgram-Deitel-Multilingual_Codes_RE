/*PREGUNTA:¿Que despliega el siguiente programa ?
RESPUESTA: el programa despliega por filas el simbolo < diez veces, alternando el simbolo contrario a este por cada fila de por medio.
*/
#include <stdio.h>
int main(){

int fila = 10; /* inicializa la fila */
int columna;

	while ( fila >= 1 ) { /* repite el ciclo hasta que fila < 1 */
	columna = 1;//columna aca siempre va a ser 1 por la razon cuando termina el segundo while se pierde el valor.
/* establece la columna en 1 al comenzar la
iteración */
		while ( columna <= 10 ) {
		printf( "%s", fila % 2 ? "<": ">" );//si fila division exacta entre dos se cumple imprime < sino imprime >
		columna++;
		}
		/* repite 10 veces */
	fila--;
	printf( "\n" ); 
	}

return 0;
}
