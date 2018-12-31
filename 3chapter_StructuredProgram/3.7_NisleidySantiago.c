/*Escriba instrucciones sencillas para
a) Introducir la variable entera x mediante scanf.
b) Introducir la variable entera y mediante scanf.
c) Inicializar la variable entera i en 1.
d) Inicializar la variable entera potencia en 1.
e) Multiplicar la variable potencia por x y asignar el resultado a potencia.
f) Incrementar la variable i en 1.
g) Verificar i para ver si es menor o igual que y en la condición de una instrucción if.
h) Mostrar la variable entera potencia mediante printf.*/

#include <stdio.h>
int main(){
int x;
printf("introduzca valor de x : \n");
scanf("%d", &x);
int y;
printf("introduzca valor de y : \n");
scanf("%d", &y);

	int i = 1;
	int potencia = 1;

potencia = potencia * x;
i = i + 1;

if(i < y){
printf("variable potencia : %d", potencia);
}
return 0;
}
