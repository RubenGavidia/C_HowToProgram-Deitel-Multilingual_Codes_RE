 #include <stdio.h>

 /* la función main inicia la ejecución del programa */
 int main()
 {
 int fila = 10; /* inicializa la fila */
 int columna; /* declara columna */

 while ( fila >= 1 ) { /* repite el ciclo hasta que fila < 1 */
 columna = 1; /* establece la columna en 1 al comenzar la
iteración */

 while ( columna <= 10 ) { /* repite 10 veces */
 printf( "%s", fila % 2 ? "<": ">" ); /* salida */
 columna++; /* incrementa columna */
 } /* fin del while interno */

 fila--; /* decrementa fila */
printf( "\n" ); /* comienza la nueva línea de salida */
 } /* fin del while externo */

 return 0; /* indica que el programa terminó con éxito */

 } /* fin de la función main
 
 imprime:
 
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
 
 */
