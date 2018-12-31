/*(Calculating the Compound Interest with Integers) Modify the program of Fig. 4.6 so that it uses only integers to calculate the compound interest. [Hint: Treat all monetary amounts as integral numbers of pennies. Then “break” the result into its dollar portion and cents portion by using
the division and remainder operations, respectively. Insert a period.]
--------------------------------------------------------------------------
Modifique el programa de la figura 4.6 de manera que sólo utilice enteros para calcular el interés compuesto. [Pista: Trate todas las cantidades monetarias como números enteros de centavos. Luego, “rompa” el resultado en su parte entera y de centavos mediante el uso de las operaciones de división y de residuo, respectivamente. Inserte un punto.]
----------------------------------------------------
/*Una persona invierte $1000.00 en una cuenta de ahorros con un 5% de interés. Se asume que todo el interés se deja en depósito dentro de la cuenta; calcule y despliegue el monto acumulado de la cuenta al final de cada año, durante 10 años. Utilice la siguiente fórmula para determinar estos montos:
a = p(1 + r)n
donde:
-p es el monto de la inversión original (es decir, la inversión principal)
-r es la tasa de interés anual
-n numero de años
-a es el monto del depósito al final del año n.
*/

#include <stdio.h>
#include <math.h>

int main(){

//double: valor flotante ms grande con mayor precision
double monto;  //monto del deposito total de la cuenta
double p = 1000.0;  //monto principal invertido
double r = .05;  //interes compuesto anual
int n;  //contador de años
int monto2;
float centavos;
int centavos2;

	/* muestra el encabezado de salida de la tabla */
	printf( "%4s %21s\n", "Anio", "Monto del deposito" ); //21 y 4 ancho del campo, valor del campo aparecera en 21 posiciones.alinear valores de punto flotante.

		/* calcula el monto del depósito para cada uno de los diez años */
		for (n = 1; n <= 10; n++) {
		/* calcula el nuevo monto para el año especificado */
			monto = p * pow( (1.0 + r), n );
				/* muestra una línea de la tabla */

				monto2 = monto;
				centavos = monto - monto2;
				centavos2 = centavos * 100;
				
				printf( "%4d \t%d.%d\n", n, monto2, centavos2);
		} /* fin de for */

return 0;
}
