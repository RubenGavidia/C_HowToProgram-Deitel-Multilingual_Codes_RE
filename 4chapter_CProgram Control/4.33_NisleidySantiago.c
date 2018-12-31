/*the Roman numeral equivalents of the decimal numbers in the range 1 to 100.
Escriba un programa que imprima una tabla de todos lo números romanos equivalentes a los números decimales en el rango de 1 a 100.*/
# include <stdio.h>
int main(){
      int i, romano;

        for(i=1; i<=100; i++){
          romano=i;

            if(romano==100) {
                printf("C");
                romano=0;
            }

            if(romano>=50) {
                printf("L");
                romano=romano -50;
            }

            while(romano>=10) {
                printf("X");
                romano=romano-10;
            }

            if(romano>=5) {
                if(romano%10==9) {
                    printf("IX");
                    romano= romano-9;
                }
                else {
                    printf("V");
                    romano=romano-5;
                }
            }




      printf("\n");
      }

  return 0;
  }
