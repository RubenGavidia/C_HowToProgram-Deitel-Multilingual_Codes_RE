/*(Calculating Sales) An online retailer sells five different products whose retail prices are
shown in the following table:
Product number Retail price
1 $ 2.98
2 $ 4.50
3 $ 9.98
4 $ 4.49
5 $ 6.87
Write a program that reads a series of pairs of numbers as follows:
a) Product number
b) Quantity sold for one day
Your program should use a switch statement to help determine the retail price for each product.
Your program should calculate and display the total retail value of all products sold last week.

Una empresa de ventas por correo vende cinco productos diferentes cuyos precios de lista mostramos en la siguiente tabla:
1 $ 2.98
2 $ 4.50
3 $ 9.98
4 $ 4.49
5 $ 6.87
Escriba un programa que lea una serie de pares de números de la siguiente manera:
a) Número de producto.
b) Cantidad vendida durante el día.
Su programa debe utilizar una instrucción switch para ayudar a determinar el precio de lista de cada producto.
Su programa debe calcular y desplegar el valor total de venta de todos los productos vendidos la semana pasada.
*/
#include <stdio.h>
int main(){

	int numProducto, cantidad;
	float precio1, precio2, precio3, precio4, precio5, preciototal;
	int producto1 = 0;
	int producto2 = 0;
	int producto3 = 0;
	int producto4 = 0;
	int producto5 = 0;

	printf("Introduzca la el numero que corresponde a cada precio de los productos:\n1 $ 2.98 \n2 $ 4.50 \n3 $ 9.98 \n4 $ 4.49 \n5 $ 6.87\n");

	printf("Introduzca el caracter EOF para finalizar la entrada de datos.\n");

	while ( ( numProducto = getchar() ) != EOF ) { //centinela control+ d
			switch ( numProducto ) { 
				case '1':printf(" $ 2.98\n");
				++producto1;
				precio1 = producto1 * 2.98;

				break;

				case '2':printf(" $ 4.50\n");
				++producto2;
				precio2 = producto2 * 4.50;

				break;

				case '3':printf(" $ 9.98\n");
				++producto3;
				precio3 = producto3 * 9.98; 

				break; 

				case '4':printf(" $ 4.49\n");
				++producto4;
				precio4 = producto4 *4.49;

				break; 

				case '5':printf(" $ 6.87\n");
 				++producto5;
 				precio5 = producto5 * 6.87; 

				break;

				case '\n': //no ignora ni salto de linea ni tabulacion ni espacio
				case '\t': 
				case ' ': 
				break;

				default: 
				printf("Introdujo una opcion incorrecta." );
				printf( " Introduzca nuevamente la opcion.\n\n" );
				printf("\t **Introduzca el numero que corresponde a cada precio de los productos:\n\t\t1 $ 2.98 \n\t\t2 $ 4.50 \n\t\t3 $ 9.98 \n\t\t4 $ 4.49 \n\t\t5 $ 6.87**\n");

				printf("\t**Introduzca el caracter EOF para finalizar la entrada de datos.**\n");
				break;

				} 
		}
preciototal = precio1 + precio2 + precio3 + precio4 + precio5;

/* muestra el resumen de los resultados */

printf( "\nLos productos vendidos son:\n" );
printf( "1: %d\tValor de productos vendidos: \t $%.2f\n", producto1, precio1);
printf( "2: %d\tValor de productos vendidos: \t $%.2f\n", producto2, precio2);
printf( "3: %d\tValor de productos vendidos: \t $%.2f\n", producto3, precio3); 
printf( "4: %d\tValor de productos vendidos: \t $%.2f\n", producto4, precio4);
printf( "5: %d\tValor de productos vendidos: \t $%.2f\n", producto5, precio5);
printf("\n El valor total de las ventas fue de :$%.2f\n: ", preciototal);


return 0;
}




