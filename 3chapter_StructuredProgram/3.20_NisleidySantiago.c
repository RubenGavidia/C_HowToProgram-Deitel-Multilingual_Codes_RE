/*Desarrolle un programa que determine el pago bruto de cada uno de los empleados. Esta empresa paga “horas completas” por las primeras 40 horas trabajadas por cada empleado y paga “hora y media” por todas las horas extras trabajadas después de las 40. Usted tiene una lista de los empleados de la empresa, el número de horas que trabajó cada empleado la semana pasada y el pago por hora de cada empleado. Su programa deberá introducir esta información para cada empleado, y deberá determinar y desplegar el pago bruto por empleado. A continuación, mostramos un ejemplo del diálogo de entrada/salida:

-Introduzca el No. de horas laboradas (-1 para terminar): 39
-Introduzca el pago por hora del empleado: 10.00
	-El salario es: $390.00
-Introduzca el No. de horas laboradas (-1 para terminar): 40
-Introduzca el pago por hora del empleado: 10.00
	-El salario es: $400.00
-Introduzca el No. de horas laboradas (-1 para terminar): 41
-Introduzca el pago por hora del empleado: 10.00
	-El salario es: $415.00
-Introduzca el No. de horas laboradas (-1 para terminar): -1
*/
#include <stdio.h>
int main(){
	int empleado = 0;
	float horas_laboradas;
	float pago_por_hora;
	float total;

printf("*PAGO BRUTO DE LOS EMPLEADOS*\n");
printf("Para el empleado (%d), introduzca el N° de horas laboradas. (-1) para terminar \n", empleado);
scanf("%f", &horas_laboradas);

	while (horas_laboradas != 0){
		printf("Introduzca el pago por hora del empleado :\n");
		scanf("%f", &pago_por_hora);

			if(horas_laboradas <= 40){
				total = horas_laboradas * pago_por_hora;
				printf("El sueldo del empleado es: $%2.f \n", total);
			}
				else if(horas_laboradas > 40){
					total = (40 * pago_por_hora) + ((horas_laboradas - 40) * 1.5 * pago_por_hora);
					printf("El sueldo del empleado es: $%2.f \n", total);
				}
		empleado = empleado + 1;
		printf("Para el empleado (%d), introduzca el N° de horas laboradas. (-1) para terminar \n", empleado);
		scanf("%f", &horas_laboradas);
				
	}
	return 0;
}
