/*Una gran empresa de productos químicos le paga a sus vendedores mediante un esquema de comisiones. Los vendedores reciben $200 semanales más el 9% de sus ventas totales durante la semana. Por ejemplo, un vendedor que vende $5000 de productos químicos durante la semana recibe $200 más el 9% de $5000, o un total de $650. Desarrolle un programa que introduzca las ventas totales de cada vendedor durante la última semana y que calcule y despliegue los ingresos de ese vendedor. Procese las cantidades de un vendedor a la vez. A continuación se muestra un ejemplo del diálogo de entrada/salida:

-Introduzca las ventas en pesos (-1 para terminar): 5000.00
	-El salario es: $650.00
-Introduzca las ventas en pesos (-1 para terminar): 1234.56
	-El salario es: $311.11
-Introduzca las ventas en pesos (-1 para terminar): 1088.89
	-El salario es: $298.00
-Introduzca las ventas en pesos (-1 para terminar): -1
*/
#include <stdio.h>
int main(){
	int vendedor = 0;
	float total_ventas;
	float total = 0;
printf("\t SALARIO MENSUAL PARA TODOS LOS TRABAJADORES DE LA EMPRESA : $200 \n");
printf("Para el vendedor: (%d) introduzca el monto total de ventas , (-1) para terminar \n", vendedor);
scanf("%f", &total_ventas);

	while (total_ventas != -1){

		total = 200 + (0.09 * total_ventas);
		printf("El salario total del vendedor es:  $%2.f \n",total);
		vendedor = vendedor + 1;
		printf("Para el vendedor: (%d) introduzca el monto total de ventas , (-1) para terminar \n", vendedor);
		scanf("%f", &total_ventas);
	} 
return 0;
}
