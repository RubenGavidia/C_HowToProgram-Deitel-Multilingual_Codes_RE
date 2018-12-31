/*(Find the Minimum) Write a function that returns the smallest of three floating-point numbers.
----------------------------------------------------------------------
Escriba una función que devuelva el más pequeño de tres números de punto flotante.*/
#include<stdio.h>
double smallest (double n1, double n2, double n3);

int main(){
  double a;
  double b;
  double c;
  double result = 0;

printf("introduzca tres numeros:\n");
scanf("%lf\n%lf\n%lf", &a, &b, &c);
printf("the smallest number is : %lf\n", smallest(a, b, c));

}

double smallest (double n1, double n2, double n3){
  if ((n1<n2) && (n1<n3)){
    return(n1);
  }
  else if((n2<n1) && (n2<n3)){
    return(n2);
  }
  else if((n3<n1) && (n3<n2)){
    return(n3);
  }
}
