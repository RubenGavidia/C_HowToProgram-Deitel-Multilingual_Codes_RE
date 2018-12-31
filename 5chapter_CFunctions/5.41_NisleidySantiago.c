/*5.41 (Distance Between Points) Write a function distance that calculates the distance between two points (x1, y1) and (x2, y2). All numbers and return values should be of type double .
-----------------------------------------------------------------------
Escriba una función distancia que calcule la distancia entre dos puntos (x1, y1) y (x2, y2). Todos los números y los valores de retorno deben ser de tipo double.*/

# include <stdio.h>
# include <math.h>

float distancia(float x1, float x2, float y1, float y2);

int main(){

  float x1, y1, x2, y2;
printf("Introduzca las coordenadas x1 y y1 del primer punto :\n");
scanf("%f", &x1);
scanf("%f", &y1);
printf("Introduzca las coordenadas x2 y y2 del segundo punto :\n");
scanf("%f", &x2);
scanf("%f", &y2);

printf("la distancia entre los dos puntos es :%.2f\n", distancia(x1, y1, x2, y2));
return 0;

}
float distancia(float a1, float b1, float a2, float b2){
  float a, b, c;
  a = a2 - (a1);
  b = b2 - (b1);

    c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}
