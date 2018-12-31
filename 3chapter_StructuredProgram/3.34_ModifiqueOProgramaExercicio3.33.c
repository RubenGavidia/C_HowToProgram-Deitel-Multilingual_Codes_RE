/*3.34 Modifique o programa escrito no Exercício 3.33 de forma que seja impresso um
quadrado vazado. Por exemplo, se seu programa lesse um tamanho 5, deveria
imprimir
============================================================
*****
*   *
*   *
*   *
*****
============================================================
*/
#include<stdio.h>

int main(){
int row=0,size,column=0;
printf("\nInsert the size of squares: ");
scanf("%d",&size);

while(row<size){
   
    column=0;
        while(column<size){
            
            if (column == 0 || column == size-1 || row ==0 || row ==size-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
            column++;
        }
        printf("\n");
        row++;
}
}
