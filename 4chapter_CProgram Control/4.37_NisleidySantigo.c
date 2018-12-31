/*4.37 Describe in general how you would remove any continue statement from a loop in a program and replace that statement with some structured equivalent. Use the technique you developed here to remove the continue statement from the program of Fig. 4.12.
--------------------------------------------------------------------------
Describa en general cómo eliminaría cualquier instrucción continue de un ciclo, y cómo la remplazaría con alguna estructura equivalente. Utilice la técnica que desarrolló aquí, para eliminar la instrucción continue del
programa de la figura 4.12.*/

//---------------------------FIGURA 4.12-----------------------------
//Uso de la instrucción continue dentro de una instrucción for
#include <stdio.h>
int main(){

int x; /* contador */

/* repite el ciclo 10 veces */
	for ( x = 1; x <= 10; x++ ) {
		if((x >=1)&&(x<=4)){
			printf( "%d ", x );
		/* si x es 5, continúa con la siguiente iteración del ciclo */
		}
		if((x>=6)&&(x<=10)){
			printf( "%d ", x );
		}
	}

printf( "\nUtiliza continue para ignorar la impresion del valor 5\n" );
return 0;
}
