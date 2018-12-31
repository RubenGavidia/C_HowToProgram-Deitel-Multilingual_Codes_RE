/*2.28 Distinguish between the terms fatal error and nonfatal error. Why might you prefer to experience
a fatal error rather than a nonfatal error?

A fatal error is one that kills your program (app / server / site / whatever it  is). It renders it unusable, either by crashing or by putting it in some state whereby it can't do it's usable work.
A "non-fatal" error is one where something messes up, but the program can continue to do what it's supposed to do (serve other users not requesting the thing that called the error, for example).

*/
/* 2.30 (Separating Digits in an Integer) Write a program that inputs one five-digit number, separates
the number into its individual digits and prints the digits separated from one another by three
spaces each. [Hint: Use combinations of integer division and the remainder operation.] For example,
if the user types in 42139, the program should print */

#include<stdio.h>

int main(){

      int number,one,two,three,four,five;
      printf("Enter the number: ");
      scanf("%d",&number);

      one=number/10000;
      two=(number%10000)/1000;
      three=((number%10000)%1000)/100;
      four=(((number%10000)%1000)%100)/10;
      five=((((number%10000)%1000)%100)%10/1);
      printf("%d   %d   %d   %d   %d",one,two,three,four,five);
 return(0);
}
