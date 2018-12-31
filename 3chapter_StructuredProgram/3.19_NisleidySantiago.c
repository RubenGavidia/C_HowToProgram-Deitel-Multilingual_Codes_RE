/*El interés simple para un préstamo se calcula mediante la fórmula:

interés = préstamo * tasa * días / 365;

La fórmula anterior asume que tasa es la tasa de interés anual, y por lo tanto incluye la división entre 365 (días). Desarrolle un programa que introduzca préstamo, tasa y días para varios préstamos, y que calcule y despliegue el interés simple para cada préstamo, utilizando la fórmula anterior. A continuación se muestra un ejemplo del diálogo
de entrada/salida:

-Introduzca el monto del préstamo (-1 para terminar): 1000.00
-Introduzca la tasa de interés: .1
Introduzca el periodo del préstamo en días: 365
	El monto del interés es $100.00

-Introduzca el monto del préstamo (-1 para terminar): 1000.00
-Introduzca la tasa de interés: .08375
-Introduzca el periodo del préstamo en días: 224
	El monto del interés es $51.40

-Introduzca el monto del préstamo (-1 para terminar): 10000.00
-Introduzca la tasa de interés: .09
-Introduzca el periodo del préstamo en días: 1460
	El monto del interés es $3600.00

-Introduzca el monto del préstamo (-1 para terminar): -1
*/
#include <stdio.h>
int main(){
	float monto_del_prestamo;
	float tasa_de_interes;
	int dias_de_interes;
	float monto_interes;
	int cliente = 0;
	float interes;

printf("Para el cliente %d .Introduzca el monto de prestamo: .Para terminar presione (-1)\n", cliente);
scanf("%f", &monto_del_prestamo);

	while(monto_del_prestamo != -1){

		printf("Introduzca la tasa de interes :\n");
		scanf("%f", &tasa_de_interes);
		printf("Introduza el periodo de prestamo en dias \n");
		scanf("%d", &dias_de_interes);

		interes = (monto_del_prestamo * tasa_de_interes * dias_de_interes) / 365;

		printf("El monto de interes es $%2.f \n\n", interes);

		cliente++,
		printf("Para el cliente %d .Introduzca el monto de prestamo: .Para terminar presione (-1)\n", cliente);
		scanf("%f", &monto_del_prestamo);
	}
return 0;
}	
