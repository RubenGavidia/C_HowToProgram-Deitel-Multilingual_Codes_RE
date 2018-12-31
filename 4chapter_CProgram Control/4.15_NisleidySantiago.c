/*(Modified Compound-Interest Program) Modify the compound-interest program of Section 4.6 to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9%, and 10%. Use a for loop to vary the interest rate.
--------------------------------------------------------------------------
Modifique el programa del interés compuesto de la sección 4.16 para repetir sus pasos para tasas de interés del 5 por ciento, 6 por ciento,7 por ciento, 8 por ciento, 9 por ciento, y 10 por ciento. Utilice un for para crear un ciclo que varíe la tasa de interés*/

#include <stdio.h>
#include <math.h>
int main(){
double monto;
double principal = 1000.0;
double tasa = .05;
int anio;//contador de anios
double tasan;
printf("anio\t monto 5%\tmonto 6%\tmonto 7%\tmonto 8%\tmonto 9%\t monto 10%\n");

    for( anio = 1; anio <= 10; anio++ ){
      printf( "%d\t", anio);
        for(tasa = 5; tasa <= 10; tasa ++){

          tasan = tasa/ 100;
          monto = principal * pow( 1.0 + tasan, anio );
          printf("%.2lf\t\t", monto);
        }
    printf("\n");
    }
return 0;
}
