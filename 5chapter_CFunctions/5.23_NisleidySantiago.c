/*Escriba una función que tome el tiempo en tres argumentos enteros (para horas, minutos, y segundos), y que devuelva el número de segundos desde la última vez que el reloj “marcó las 12”. Utilice esta función para calcular los segundos que existen entre dos horas, las cuales se miden con el ciclo de 12 horas del reloj.
----------------------------------------------------------------------
(Time in Seconds) Write a function that takes the time as three integer arguments (for hours, minutes, and seconds) and returns the number of seconds since the last time the clock “struck 12.” Use this function to calculate the amount of time in seconds between two times, both of which are within one 12-hour cycle of the clock.
*/
#include<stdio.h>
int tiempo(int horas, int minutos, int segundos);

int main(){
  int h, m, s;
  printf("\t\t**CONTADOR DE RELOJ ANALOGICO**\n\n");
  printf("Introduzca la hora actual\n");
  scanf("%d\n%d\n%d", &h, &m, &s);

  //verificacion de la hora correcta
    if((h<1)||(h>13)){
      printf("ERROR/introduzca una hora valida\n");
      scanf("%d\n%d\n%d", &h, &m, &s);
      while((h<1)||(h>13)){
        printf("ERROR/hora invalida introduzca nuevamente\n");
        scanf("%d\n%d\n%d", &h, &m, &s);
      }
    }
    //verificacion de los minutos
    if((m<0)||(m>60)){
      printf("ERROR/introduzca una hora valida\n");
      scanf("%d\n%d\n%d", &h, &m, &s);
      while((m<0)||(m>60)){//repita hasta que h > 0
        printf("ERROR/hora invalida introduzca nuevamente\n");
        scanf("%d\n%d\n%d", &h, &m, &s);
      }
    }
    //verificacion de los segundos
    if((s<0)||(s>60)){
      printf("ERROR/introduzca una hora valida\n");
      scanf("%d\n%d\n%d", &h, &m, &s);
      while((s<0)||(s>60)){//repita hasta que h > 0
        printf("ERROR/hora invalida introduzca nuevamente\n");
        scanf("%d\n%d\n%d", &h, &m, &s);
      }
    }
    int resultado;
    resultado = tiempo(h,m,s);
    printf("Los segundos desde las 12 hasta las %d:%d:%d son:\t%d\n\n",h,m,s, resultado);
  return 0;
}

int tiempo(int horas, int minutos, int segundos){
  int hh = 0, mm = 0, ss = 0;
  //hora a segundos:
  if(horas <= 12){
    hh = 12-horas;
      if(hh !=0){
      mm = horas*60;
      ss = (mm * 60) + (minutos * 60) + segundos;
      return(ss);
      }

      else if((hh == 0) && (minutos!=0)){
          ss = (minutos * 60) + segundos;
          return(ss);
        }

      else if((horas == 0) && (minutos == 0)){
      return(segundos);
      }

}
}
