/*2.18   (Comparing Integers) Write a program that asks the user to enter two integers, obtains the
numbers from the user, then prints the larger number followed by the words “is larger.” If the
numbers are equal, print the message “These numbers are equal.” Use only the single-selection
form of the if statement you learned in this chapter.
*/
#include<stdio.h>

int main(){
    int x,y;

printf( "Enter Values if X and Y : \n" );
scanf("%d%d",&x,&y);

if(x>y){ printf("X is larger of Y");}
if(x<y){ printf("Y is larger of X");}
if(x==y){ printf("X is equal to Y");}
return(0);
}
