/*3.26 (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23, find the two
largest values of the 10 numbers. [Note: You may input each number only once.

*/


#include<stdio.h>


int main(){
    int counter=1,number,largest=0,largest2=0;

        while(counter<=10){
            printf("Numero de unidades vendidas por vendedor%d:",counter);
            scanf("%d",&number);  
            if(number>=largest){
                largest2=largest;
                largest = number;
                }
                  counter++;
            }
          
          printf( "The Largests Number is: %d and %d\n", largest, largest2);
        }
