/*4.31 (Diamond-Printing Program) Write a program that prints the following diamond shape.
You may use printf statements that print either a single asterisk ( * ) or a single blank. Maximize your use of repetition (with nested for statements) and minimize the number of printf statements.
   *
  ***
 *****
*******
*********
*******
  *****
   ***
    *

    Escriba un programa que imprima la siguiente figura de rombo. Usted puede utilizar instrucciones printf que impriman ya sea un asterisco individual (*), o un espacio en blanco individual. Maximice el uso de las repeticiones (mediante instrucciones for anidadas) y minimice el número de instrucciones printf.
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
*/
#include <stdio.h>
int main(){
    int i, j, k;
//parte de arriba:
    for(i=0; i<=4; i++) {
          for(j=0; j<(4-i); j++){
            printf( " " );
          }
          for(k=0; k<(1+(i*2)); k++){
            printf( "*" );
          }
      printf( "\n" );
    }
//parte de abajo:
    for(i=3; i>=0; i--){
          for(j=0; j<(4-i); j++){
            printf( " " );
          }
          for(k=0; k<(1+(i*2)); k++){
            printf( "*" );
          }
      printf( "\n" );
    }

    return 0;
}
