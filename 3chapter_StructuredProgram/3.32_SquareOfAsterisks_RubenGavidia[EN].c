/*
3.32 (Square of Asterisks) Write a program that reads in the side of a square and then prints that
square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For
example, if your program reads a size of 4, it should print
============================================================
****
****
****
****
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
            printf("*");
            column++;
        }
        printf("\n");
 row++;
}
}

