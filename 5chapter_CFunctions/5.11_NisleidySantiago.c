/*La función floor puede utilizarse para redondear un número a una posición decimal determinada. La instrucción:
y = floor( x * 10 + .5 ) / 10;
redondea x a la posición de las décimas (la primera posición a la derecha del punto decimal). La instrucción
y = floor( x * 10 + .5 ) / 100;
redondea x a la posición de las centésimas (la segunda posición a la derecha del punto decimal). Escriba un programa que defina cuatro funciones para redondear al número x de distintas maneras:
a)redondeaAentero( numero )

b)redondeaAdecimas ( numero )

c)redondeaAcentesimas ( numero )

d)redondeaAmilesimas ( numero )

Por cada valor leído, su programa debe imprimir el valor original, el número redondeado al entero más cercano, el número redondeado a la décima más cercana, el número redondeado a la centésima más cercana, y el número redondeado a la milésima más cercana.
*/
#include <stdio.h>
#include <math.h>

/* gcc -lm 05_11.c */

double redondeaAentero(double number);
double redondeaAdecimas(double number);
double redondeaAcentesimas(double number);
double redondeaAmilesimas(double number);

int main(){

    double x;

    printf("introduzca el numero:\n ");

        while (scanf("%lf", &x) != EOF) {
      	printf("\n");
      	printf("x = %f\n", x);
      	printf("redondeaAentero(x) = %f\n", redondeaAentero(x));
      	printf("redondeaAdecimas(x) = %f\n", redondeaAdecimas(x));
      	printf("redondeaAcentesimas(x)= %f\n", redondeaAcentesimas(x));
      	printf("redondeaAmilesimas(x) = %f\n", redondeaAmilesimas(x));
      	printf("\n");
      	printf("Enter a number: ");
        }

    return 0;

}

double redondeaAentero(double number)
{
    return floor(number + .5);
}

double redondeaAdecimas(double number)
{
    return floor(number * 10 + .5) / 10;
}

double redondeaAcentesimas(double number)
{
    return floor(number * 100 + .5) / 100;
}

double redondeaAmilesimas(double number)
{
    return floor(number * 1000 + .5) / 1000;
}
