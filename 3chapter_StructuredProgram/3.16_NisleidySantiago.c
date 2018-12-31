/*Los conductores están preocupado por el kilometraje obtenido en sus automóviles. Un conductor mantiene el registro de muchos llenados de tanque de gasolina mediante el registro de miles de kilómetros conducidos y los litros empleados durante cada llenado del tanque. 

El programa debe calcular y desplegar los kilómetros por litro
obtenidos durante cada llenado de tanque. Después de procesar toda la información, el programa debe calcular y desplegar los kilómetros por litro combinados de todos los llenados de tanque. He aquí un ejemplo del diálogo de entrada/salida:

	-Introduzca los litros utilizados (-1 para terminar): 12.8
	-Introduzca los kilómetros conducidos: 287
	-Los kilómetros por litro de éste tanque fueron 22.421875
	-Introduzca los litros utilizados (-1 para terminar): 10.3
	-Introduzca los kilómetros conducidos: 200
	-Los kilómetros por litro de éste tanque fueron 19.417475
	-Introduzca los litros utilizados (-1 para terminar): 5
	-Introduzca los kilómetros conducidos: 120
	-Los kilómetros por litro de éste tanque fueron 24.000000
	-Introduzca los litros utilizados (-1 para terminar): -1
	-El promedio general de kilómetros/litro fue 21.601423*/

#include <stdio.h>
int main(){

	int tanques = 0;
	int litros;
	int kilometros;
	int total = 0;
	float promedio;
	int total_tanques = 0;

printf("listado de llenados por tanque \n");
printf("para tanque: %d \n", tanques);
printf("Introduzca los litros utilizados, (-1) para terminar \n");
scanf("%d", &litros );

	while ( litros != -1 ) {
		printf("introduzca los km conducidos\n");
		scanf("%d", &kilometros);
		total = litros * kilometros;
		printf("los kilometros por litro de este tanque fueron: %d Km.L \n", total);
		total_tanques = total_tanques + total;
		tanques = tanques + 1;
		//siguiente tanque:
		printf("para tanque: %d \n", tanques);
		printf("Introduzca los litros utilizados, (-1) para terminar \n");
		scanf("%d", &litros);
	}
		
			if(tanques != 0){
				promedio = total_tanques / tanques;
				printf("el promedio general de km/L es: %2.f \n", promedio);
			}

			else{
				printf("no se introdujeron datos sobre ningun tanque \n");
			}

return 0;
}
