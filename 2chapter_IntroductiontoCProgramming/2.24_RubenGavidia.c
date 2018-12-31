/*2.26 (Multiples) Write a program that reads in two integers and determines and prints whether
the first is a multiple of the second. [Hint: Use the remainder operator.]*/

#include<stdio.h>

int main(){

      int A,b;
      printf("Enter two integer: ");
      scanf("%d%d",&A,&b);
      if(b%A==2){ printf("The number %d is even\n",A);}
        else if(b%A==3){printf("The number %d is odd\n",A);}
 return(0);
}
