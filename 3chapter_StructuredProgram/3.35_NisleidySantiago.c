/*Introduzca un número entero que contenga sólo unos y ceros (es decir, un entero “binario”) y que despliegue su equivalente decimal. [Pista: Utilice los operadores de división y residuo para separar los dígitos del número “binario”, uno por uno, de derecha a izquierda. Así como en el sistema de numeración decimal, el dígito más a la derecha tiene un valor de posición de 1, y el siguiente dígito a la izquierda tiene un valor por posición de 10, después de 100, después de 1000, y así sucesivamente, en el sistema binario de numeración, el dígito que se encuentra a la derecha tiene un valor por posición de 1, el siguiente dígito a la izquierda tiene un valor por posición de 2, después de 4,
de 8, y así sucesivamente. Así, el número 234 se puede interpretar como 4 * 1 + 3 * 10 + 2 * 100. El equivalente decimal del número binario 1101 es 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 o 1 + 0 + 4 + 8 o 13.]*/

# include <stdio.h>
int main(){

int number;
int a, b, c, d, e, f, g, h;
int a1, b1, c1, d1, e1, f1, g1, h1;
int valor;
int suma;

printf("Enter a binary number (equal 1 byte = 8 digits):\n");
scanf("%d", &number);

	a = number / 10000000;
	b = number / 1000000 % 10;
	c = number / 100000 % 10;
	d = number / 10000 % 10;
	e = number / 1000 % 10;
	f = number / 100 % 10;
	g = number / 10 % 10;
	h = number / 1 % 10;

	printf("\t *NUMBER BINARY :* \t ");

	printf("%d ", a);
	printf("%d ", b);
	printf("%d ", c);
	printf("%d ", d);
	printf("%d ", e);
	printf("%d ", f);
	printf("%d ", g);
	printf("%d ", h);



if(h == 1){
	h = 1;
}

if(g == 1){
	g = 2;
}

if(f == 1){
	f = 4;
}

if(e == 1){
	e = 8;
}

if(d == 1){
	d = 16;
}

if(c == 1){
	c = 32;
}

if(b == 1){
	b = 64;
}

if(a == 1){
	a = 128;
}
	printf("\n");
	printf(" \t *DECIMAL NUMBER:* \t");
	printf("%d ", a);
	printf("%d ", b);
	printf("%d ", c);
	printf("%d ", d);
	printf("%d ", e);
	printf("%d ", f);
	printf("%d ", g);
	printf("%d ", h);

suma = a + b + c + d + e + f + g + h;  
printf("\n \t *Equal Binary - Decimal:* \t %d \n", suma);

return 0;
}
