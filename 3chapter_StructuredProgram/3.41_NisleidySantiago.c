/*Escriba un programa que lea el radio de un círculo (como un valor float) y que calcule y despliegue el diámetro, la circunferencia y el área. Utilice el valor 3.14159 para π.*/

#include <stdio.h>
int main(){
	float radious;
	float pi = 3.14159;
	float diameter;
	float circumference;
	float area;

printf("Enter the radious of the circle:\n ");
scanf("%f", &radious);

//diametro:
diameter = radious * 2;
circumference = 2 * pi * radious;
area = pi * radious * radious;

printf("Radius :%f \nDiameter :%f \nCircumference: %f\nArea : %f\n", radious, diameter, circumference, area);

return 0;

}
