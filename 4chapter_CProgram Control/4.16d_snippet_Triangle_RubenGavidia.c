/*4.16 (Triangle-Printing Program) Write a program that prints the following patterns separately,
one below the other. Use for loops to generate the patterns. All asterisks ( * ) should be printed by a
single printf statement of the form printf( "%s", "*" ); (this causes the asterisks to print side by
side). [Hint: The last two patterns require that each line begin with an appropriate number of blanks.]
(A)
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
(B)
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
(C)
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
(D)
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
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||
PURA MIERDA ->
|
*/


#include <stdio.h>
int main(){

int i, n,s;
	printf("\n");

	for(i = 1; i <= 10; i++){

		for(s=10; s >= i ; s--){
		printf(" ");
}
		for(n = 1; n <= i; n++){
			printf("*");
			}
		printf("\n");
	}
}
