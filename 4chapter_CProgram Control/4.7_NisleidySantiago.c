/*Escriba instrucciones for que impriman la siguiente secuencia de valores:
a) 1, 2, 3, 4, 5, 6, 7
b) 3, 8, 13, 18, 23
c) 20, 14, 8, 2, -4, -10
d) 19, 27, 35, 43, 51
*/
#include <stdio.h>
int main(){
	int i;

//a)
	for (i = 1; i <= 7; i++){
		printf("%d, ", i);
	}
printf("\n");

//b)
	for (i = 3; i <= 23; i += 5){
		printf("%d, ", i);
	}
printf("\n");

//c)
	for (i = 20; i >= -10; i -= 6){
		printf("%d, ", i);
	}	

printf("\n");

//d)
	for (i = 19; i <= 51; i += 8){
		printf("%d, ", i);
	}	

printf("\n");
return 0;
}