/*4.14 (Factorials) The factorial function is used frequently in probability problems. The factorial of
a positive integer n (written n! and pronounced “n factorial”) is equal to the product of the positive
integers from 1 to n. Write a program that evaluates the factorials of the integers from 1 to 5. Print the
results in tabular format. What difficulty might prevent you from calculating the factorial of 20?

|||
*/
#include<stdio.h>

//5*4*3*2*1
int main(){
    int i=5;
    int a=1,b=1;
for(i=5;i>=1;i--){
  a*=i; //5*1 //4*5
  printf("\nthis is tabular form shit?????: %d for bucle %d\n",a,b);
  b++;
}
      printf("*************************\nThe TOTAL Factorial is: %d\n*************************\n",a);
}
