/*Desarrolle un programa en C que determine si un cliente de una tienda departamental excede el límite de crédito de su cuenta. Para cada cliente, se dispone de los siguientes datos:

1. Número de cuenta.
2. Saldo al inicio del mes.
3. Total de elementos cargados al cliente en este mes.
4. El total de los créditos aplicados a la cuenta del cliente durante el mes.
5. El límite de crédito autorizado.

El programa debe introducir cada uno de estos datos, calcular el nuevo saldo (= saldo inicial + cargos – créditos), y determinar si el nuevo saldo excede el límite de crédito del cliente. Para aquellos clientes que excedan el límite de crédito, el programa debe desplegar el número de cuenta, el límite de crédito, el saldo nuevo y el mensaje “Límite de crédito excedido”. A continuación se muestra un ejemplo del diálogo de entrada/salida:

-Introduzca el número de cuenta (-1 para terminar): 100
-Introduzca el saldo inicial: 5394.78
-Introduzca el total de cargos: 1000.00
-Introduzca el total de créditos: 500.00
-Introduzca el límite de crédito: 5500.00

		Cuenta: 100
		Límite de crédito: 5500.00
		Saldo: 5894.78
		Límite de crédito excedido.
*/
#include <stdio.h>
int main(){
	int numero_cuenta;
	float saldo_inicial;
	int total_cargos;
	int total_creditos;
	float limite_credito;
	int cliente = 0;
	float nuevo_saldo = 0;

printf("**CLIENTES CON TARJETAS DE CREDITO**\n\n");
printf("Para cliente #%d  .Introduzca el numero de cuenta. Para finalizar introduzca (-1): \n", cliente);
scanf("%d", &numero_cuenta);

	while(numero_cuenta != -1){
		printf("Introduzca el saldo al inicio de mes actual:\n");
		scanf("%f", &saldo_inicial);
		printf("Introduzca el monto total de los cargos en el mes actual:\n");
		scanf("%d", &total_cargos);
		printf("Introduzca el monto total de creditos en el mes actual:\n");
		scanf("%d", &total_creditos);
		printf("Introduzca el limite de credito autorizado:\n");
		scanf("%f", &limite_credito);
		//calculo:
		nuevo_saldo = saldo_inicial + total_cargos - total_creditos;

			if(nuevo_saldo <= limite_credito){
				printf("Cuenta: %d \n Limite de credito: %2.f \n Saldo: %f \n LIMITE DE CREDITO EXCEDIDO \n", numero_cuenta , limite_credito, nuevo_saldo);
			}

			cliente++;
			
			printf("Para cliente #%d  .Introduzca el numero de cuenta. Para finalizar introduzca (-1): \n", cliente);
			scanf("%d", &numero_cuenta);
	}

return 0;

}
