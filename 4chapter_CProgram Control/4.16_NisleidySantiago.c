/*4.16 (Triangle-Printing Program) Write a program that prints the following patterns separately,
one below the other. Use for loops to generate the patterns. All asterisks ( * ) should be printed by a single printf statement of the form printf( "%s", "*" ); (this causes the asterisks to print side by side). [Hint: The last two patterns require that each line begin with an appropriate number of blanks.]

Escriba un programa que imprima los patrones siguientes de manera separada, uno debajo del otro. Utilice ciclos for para generar los patrones. Todos los asteriscos (*) deben imprimirse mediante una sola instrucción printf de la forma printf(“*”); (esto provoca que los asteriscos se impriman uno al lado del otro). Pista: Los dos últimos patrones requieren que cada línea comience con el número apropiado de espacios en blanco.
*/

//a)
/*

*
**
***
****
*****
******
*******
********
*********
**********

*/
/*
#include <stdio.h>
int main(){

int i, n;
	printf("\n");
	
	for(i = 1; i <= 10; i++){
		for(n = 1; n <= i; n++){
			printf("*");
			}
		printf("\n");
	}
} */


//b)
/*
**********
*********
********
*******
******
*****
****
***
**
*/

/*#include <stdio.h>
int main(){

int i, n;
	printf("\n");
	
	for(i = 1; i <= 10; i++){
		for(n = 10; n >= i; n--){
			printf("*");
			}
		printf("\n");
	}
}
*/

//c)
/*
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *
*/
/*
#include <stdio.h>
int main(){

int i, n, s;
	printf("\n");
	
	for(i = 1; i <= 10; i++){
		for(n = 10; n >= i; n--){
			printf("*");
			}
		printf("\n");

		for(s = 1; s <= i; s++){
			printf(" ");
		}
		
	}
} */

//d)
 /*
	 *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********

*/
#include <stdio.h>
int main(){

int i, n, s;
	printf("\n");
	
	for(i = 1; i <= 10; i++){

		for(n = 10; n >= i; n--){
			printf(" ");
			}

		for(s = 1; s <= i; s++){
			printf("*");
		}
			printf("\n");	
	}
}
