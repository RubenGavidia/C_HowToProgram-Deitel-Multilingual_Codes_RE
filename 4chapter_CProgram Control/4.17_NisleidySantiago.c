/*(Calculating Credit Limits) Collecting money becomes increasingly difficult during periods of recession, so companies may tighten their credit limits to prevent their accounts receivable(money owed to them) from becoming too large. In response to a prolonged recession, one company has cut its customers’ credit limits in half. Thus, if a particular customer had a credit limit of $2000,
it’s now $1000. If a customer had a credit limit of $5000, it’s now $2500. Write a program that analyzes the credit status of three customers of this company. For each customer you’re given:
a) The customer’s account number
b) The customer’s credit limit before the recession
c) The customer’s current balance (i.e., the amount the customer owes the company).
Your program should calculate and print the new credit limit for each customer and should determine (and print) which customers have current balances that exceed their new credit limits.
--------------------------------------------------------------------------------
Recuperar el dinero se hace más difícil durante los periodos de recesión, de manera que las empresas deben reducir sus límites de crédito para prevenir que sus cuentas por cobrar (el dinero prestado) se hagan muy grandes. En respuesta a la prolongada recesión, una empresa recortó sus límites de crédito a la mitad. De esta manera, si un cliente en particular tenía un límite de crédito de $2000, ahora su límite es de $1000. Si un cliente tenía un límite de crédito de $5000, este cliente tiene ahora un límite de crédito de $2500. Escriba un programa que analice el estado del crédito de tres clientes de esta empresa. Por cada cliente a usted se le brinda:
a) El número de cuenta del cliente.
b) El límite de crédito antes de la recesión.
c) El saldo actual del cliente (es decir, el monto que le debe el cliente a la empresa).
Su programa debe calcular e imprimir el nuevo límite de crédito para cada cliente, y debe determinar (e imprimir) cuáles clientes tienen saldos que exceden los nuevos límites de crédito.*/
#include <stdio.h>
int main(){
	int cuenta;
	int limite_anterior;
	int saldo_actual;
	int nuevo_limite;
	int i, a, b, c;

		for(i = 1; i <= 3; i++){
			printf("Para el %d cliente:\n", i);
			printf("Introduzca el numero de cuenta: \n");
			scanf("%d", &cuenta);
			printf("Introduzca el limite de credito antes de la recesion: \n");
			scanf("%d", &limite_anterior);
			printf("Introduzca el saldo actual del cliente (monto que le debe el cliente a la empresa) \n");
			scanf("%d", &saldo_actual);

			nuevo_limite = limite_anterior / 2;
			printf("El nuevo limite de credito asignado es %d$:\n", nuevo_limite);

				if(saldo_actual > nuevo_limite){
					
					printf("el cliente tiene un saldo actual excede el nuevo limite de credito \n");
				}

			printf("\n\n");

		}

}