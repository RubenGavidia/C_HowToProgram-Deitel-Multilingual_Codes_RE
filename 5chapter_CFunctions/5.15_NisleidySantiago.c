/*Defina una función llamada hipotenusa que calcule la longitud de la hipotenusa de un triángulo recto, cuando se introducen los otros dos lados. Utilice esta función en un programa que determine la longitud de la hipotenusa para cada uno de los siguientes triángulos. La función debe tomar dos argumentos de tipo double y devolver la
hipotenusa como double. Verifique su programa con los valores de los lados especificados en la figura 5.18.

Triángulo Lado 1 Lado 2
1         3.0     4.0
2         5.0     12.0
3         8.0     15.0

Figura 5.18 Valores de ejemplo para los lados del triángulo para el ejercicio 5.15.
*/
# include<stdio.h>
# include<math.h>
double hipotenusa(double lado1, double lado2);

int main(){
  printf("triangulo lado 1 lado2 hipotenusa\n");
  printf("1\t  3.00\t 4.00\t %.2lf\n", hipotenusa(3.00,4.00));
  printf("2\t  5.00\t 12.00\t %.2lf\n", hipotenusa(3.00,4.00));
  printf("3\t  8.00\t 15.00\t %.2lf\n", hipotenusa(3.00,4.00));

}
double hipotenusa(double lado1, double lado2){
  return (sqrt(pow(lado1, 2) + pow(lado2, 2)));

}
