/*4.39 (World Population Growth) World population has grow considerably over the centuries.
Continued growth could eventually challenge the limits of breathable air, drinkable water, arable cropland and other limited resources. There’s evidence that growth has been slowing in recent years and that world population could peak some time this century, then start to decline.
For this exercise, research world population growth issues online. Be sure to investigate various viewpoints. Get estimates for the current world population and its growth rate (the percentage by which it’s likely to increase this year). Write a program that calculates world population growth each year for the next 75 years, using the simplifying assumption that the current growth rate will stay constant. Print the results in a table. The first column should display the year from year 1 to year 75. The second column should display the anticipated world population at the end of that year.
The third column should display the numerical increase in the world population that would occur that year. Using your results, determine the year in which the population would be double what it is today, if this year’s growth rate were to persist.
----------------------------------------------------------------------
(Crecimiento demografico mundial).La poblacion mundial ha crecido considerablemente a lo largo de los siglos.El crecimiento continuo podria desafiar los limites del aire respirable, agua potable, arable tierra de cultivo y otro recursos limitados. Hay evidencia de que el crecimiento se ha estado desacelerando en los ultimos años y que la poblacion mundial podria alcanzar un pico en algun momento de este siglo, y luego comenzar a declinar. Para este ejercicio investigue los problemas de crecimiento de la poblacion mundial en linea. Asegurate de investigar varios puntos de vista.Obtenga estimaciones para la poblacion mundial y su tasa de crecimiento(el porcentaje de probabilidad que aumente este año). Escriba un programa que calcule el crecimiento de la poblacion mundial cada año durante los proximos 75 años, utilizando la suposicion simplificadora de que la tasa de crecimiento actual se mantendra constante. Imprime los resultados en una tabla. La pimera columna debe mostrar el año, del año 1 al año 75. La segunda columna debe mostrar la poblacion mundial prevista a final de ese año. La tercera columna debe mostrar el aumento numerico en la poblacion mundial que ocurriria ese año.Usando sus resultados determine el año en que la poblacion duplicaria que es hoy , si la tasa de crecimiento de este año persiste.
*/

# include <stdio.h>
# include<math.h>

int main(){
  long int anio;
  double poblacion = 7640000000;
  double aumento_poblacional = 0;
  double tasa_de_crecimiento = 0.012; //constante;
  int y = 0;
  double duplicado;

  printf("anio\tpoblacion\taumento numerico\n");
  printf("2018\t%.2lf\t", poblacion);
  aumento_poblacional = poblacion * tasa_de_crecimiento;
  printf("%.2lf\n", aumento_poblacional);

  for(int i = 2019; i <= 2093; i++){
    printf("%ld\t", i);
    poblacion = poblacion + aumento_poblacional;
    aumento_poblacional = poblacion * tasa_de_crecimiento;
    printf("%.2lf\t%.2lf", poblacion, aumento_poblacional);

      if((poblacion >= 15280000000)&&(poblacion < 15628745128)){
        printf("\nla poblacion ha duplicara el año 2018 en el año %d\n", i);
      }

      printf("\n");

  }
}
