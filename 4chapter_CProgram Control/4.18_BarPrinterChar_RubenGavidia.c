/*4.18 (Bar Chart Printing Program) One interesting application of computers is drawing graphs
and bar charts (sometimes called “histograms”). Write a program that reads five numbers (each be-
tween 1 and 30). For each number read, your program should print a line containing that number
of adjacent asterisks. For example, if your program reads the number seven, it should print ******* .*/
#include<stdio.h>

int main(){

  int a, b, c , d, e;
  int i;

  printf("Enter 0101 digit: \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

  for(i=1;i<=a;i++){
        printf("*");
            }
            printf("\n");
for(i=1;i<=b;i++){
      printf("*");
}
printf("\n");

for(i=1;i<=c;i++){
      printf("*");
}
printf("\n");

for(i=1;i<=d;i++){
      printf("*");
}
      printf("\n");

      for(i=1;i<=e;i++){
            printf("*");

}

  printf("\n");
}
