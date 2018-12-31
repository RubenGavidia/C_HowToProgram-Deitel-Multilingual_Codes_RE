/*Escriba un programa que lea tres valores de tipo float diferentes de cero y que determine (y despliegue) si éstos
pueden representar los lados de un triángulo recto.
(Sides of a Triangle) Write a program that reads three nonzero integer values and deter-
mines and prints whether they could represent the sides of a triangle rect.
*/

# include <stdio.h>
int main(){
	int a;
	int b;
	int c;

printf("Enter three valors nonzero :\n");
scanf("%d %d %d", &a, &b, &c);
	
	if((a > 0) && (b > 0) && (c > 0)){
		if(((( a == b ) && (( a !=c ))) || (( a == c ) && ( a != b)) || (( b == c ) && ( b != a)))){
			printf("the valors could represent a rect triangle \n");
		}

		else{
			printf("triangle nonrect \n");

		}
	}
	else{
		printf("valors nonrigth \n");
	}
return 0;
}
