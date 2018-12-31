/*4.35 A criticism of the break statement and the continue statement is that each is unstructured.
Actually, break statements and continue statements can always be replaced by structured statements, although doing so can be awkward. Describe in general how you would remove any break statement from a loop in a program and replace that statement with some structured equivalent.
[Hint: The break statement leaves a loop from within the body of the loop. The other way to leave is by failing the loop-continuation test. Consider using in the loop-continuation test a second test that indicates “early exit because of a ‘break’ condition.”] Use the technique you developed here to remove the break statement from the program of Fig. 4.11.
--------------------------------------------------------------------------
Una crítica de las instrucciones break y continue es que no son estructuradas En realidad, las instrucciones break y continue siempre se pueden remplazar con instrucciones estructuradas, sin embargo, hacerlo puede resultar perjudicial. En general, describa cómo eliminaría cualquier instrucción break de un ciclo, y cómo la remplazaría con algún equivalente estructurado. [Pista: La instrucción break abandona un ciclo desde el cuerpo mismo del ciclo. La otra manera de abandonar el ciclo es al fallar la condición de terminación de éste. Considere utilizar una prueba de continuación de ciclo como una segunda prueba que indique un “abandono temprano debido a una condición break”.] Utilice la técnica que desarrolló aquí, para eliminar la instrucción break del programa de la figura 4.11.
*/

//----------------FIGURA 4.11--------------------
//Uso de la instrucción break dentro de la instrucción for
#include <stdio.h>
int main(){
int x; /* contador */

	for ( x = 1; x <= 10; x++ ) {
		if ((x >= 1)&&(x<=4)){
			printf( "%d ", x );
		}
		if(x == 5){
			printf( "\nRompe el ciclo en x = %d\n", x );

		}
	}


return 0;
}
