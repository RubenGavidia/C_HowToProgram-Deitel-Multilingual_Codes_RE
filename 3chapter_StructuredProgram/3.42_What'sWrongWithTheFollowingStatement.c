/* 3.42 What’s wrong with the following statement? Rewrite it to accomplish what the programmer
was probably trying to do.
printf( "%d", ++( x + y ) ); 

OCCURS: 
3.42_What'sWrongWithTheFollowingStatement.c:9:17: error: lvalue required as increment operand
    printf("%d",++(x+y));
______________________________________________________
#include<stdio.h>

int main(){
    int x=2,y=2;
    printf("%d",++(x+y));
    
}
______________________________________________________
   fixed it  */


#include<stdio.h>

int main(){
    int x=2,y=2,sum;
    sum=x+y;
    printf("%d",++(sum));
    
}
