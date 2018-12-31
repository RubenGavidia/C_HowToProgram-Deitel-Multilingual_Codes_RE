/*Escriba un programa que demuestre la diferencia entre el predecremento y el posdecremento mediante el uso del
operador --
*/
#include <stdio.h>
int main(){
	int c = 5;

printf( "%d\n", c );
printf( "%d\n", c-- ); 
printf( "%d\n\n", c );
c = 5;
printf( "%d\n", c);
printf( "%d\n", --c);
printf( "%d\n", c);

return 0;
}
