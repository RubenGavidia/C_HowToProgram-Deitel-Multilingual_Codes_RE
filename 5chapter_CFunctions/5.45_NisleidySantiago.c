/*5.45 (Testing Math Library Functions) Write a program that tests the math library functions in Fig. 5.2. Exercise each of these functions by having your program print out tables of return values for a diversity of argument values.
-----------------------------------------------------------------------
Escriba un programa que verifique tantas funciones matemáticas de la biblioteca de la figura 5.2 como pueda. Practique con cada una de estas funciones haciendo que su programa imprima las tablas de retorno de los valores para una diversidad de valores de argumentos.*/
#include <stdio.h>
#include <math.h>

int main(){
  printf("sqrt(%.2lf)=%.2lf\n", 900.00, sqrt(900.00));
  printf("exp(%lf)=%lf\n", 1.00, exp( 1.00 ));
  printf("exp(%lf)=%lf\n", 2.00, exp( 2.00 ));
  printf("log(%lf)=%lf\n", 2.718282, log(2.718282));
  printf("log(%lf)=%lf\n", 7.389056, log(7.389056));
  printf("log10(%lf)=%lf\n", 1.0, log10(1.0));
  printf("log10(%lf)=%lf\n", 100.0, log10(100.0));
  printf("log10(%lf)=%lf\n", 1000.0, log10(1000.0));
  printf("fabs(%lf)=%lf\n", 5.0, fabs(5.0));
  printf("fabs(%lf)=%lf\n", 0.0, fabs(0.0));
  printf("fabs(%lf)=%lf\n", -5.0, fabs(-5.0));
  printf("ceil(%lf)=%lf\n", 9.2, ceil(9.2));
  printf("ceil(%lf)=%lf\n", -9.8, ceil(-9.8));
  printf("floor(%lf)=%lf\n", 9.2, floor(9.2));
  printf("floor(%lf)=%lf\n", -9.8, floor(-9.8));
  printf("pow(%f^%f)=%f\n", 2, 7, pow(2, 7));
  printf("pow(%f^%f)=%f\n", 9, 5, pow(9, 5));
  printf("fmod(%f/%f)=%f\n",13.657, 2.333, fmod(13.657, 2.333));
  printf("sin(%lf)=%lf\n", 0.0, sin(0.0));
  printf("cos(%lf)=%lf\n", 0.0, cos(0.0));
  printf("tan(%lf)=%lf\n", 0.0, tan(0.0));
}

/*
//PROTOTIPOS DE LAS FUNCIONES DE LA LIBRERIA MATH.H
  double sqrt(double x);
  double exp(double x);
  double log(double x);
  double log10(double x);
  double fabs(double x);
  double ceil(double x);
  double floor(double x);
  double pow(double x, double y);
  double fmod(double x, double y);
  double sin(double x);
  double cos(double x);
  double tan(double x);

int main (){
  double x = 2;
  double y = 5;

sqrt(x);
exp(x);
//log(x);
//log10(x);
fabs(x);
//ceil(x);
//floor(x);
pow(x, y);
fmod(x, y);
//sin(x);
//cos(x);
//tan(x);

return 0;
}

double sqrt(double x){
  x = x^(1/2);
  return(x);

}

double exp(double x){
  x = (2,718281828)^x;
  return(x);
}

//double log(double x){}

//double log10(double x){}
double fabs(double x){
  if(x < 0){
    x = x * (-1);
    return(x);
  }

  else{
    return(x);
  }
  }

//double ceil(double x){}

//double floor(double x){}

double pow(double x, double y){
  int i;
  if(y == 1){
    return (x);
  }
  else if{
  for(i = 2; i <= y; i++){
    x = x * x;
    return(x);
  }
}
}

double fmod(double x, double y){
  x = x % y;
  return(x);
}
//double sin(double x);

//double cos(double x);

//double tan(double x);
*/
