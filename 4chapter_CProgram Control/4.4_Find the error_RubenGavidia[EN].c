/*
4.4 Find the error in each of the following code segments and explain how to correct it.
a) x = 1;
while ( x <= 10 );
++x;
}
======================================================
quit de semicolon after while replace by braces
=======================================================

b) for ( y = .1; y != 1.0; y += .1 )
printf( "%f\n", y );
=========================================================
Error: Using a floating-point number to control a for repetition statement.
Correction: Use an integer, and perform the proper calculation to get the values you desire.
for ( y = 1; y != 10; ++y )
printf( "%f\n", ( float ) y / 10 );
==========================================================
c) switch ( n ) {
case 1:
puts( "The number is 1" );
case 2:
puts( "The number is 2" );
break;
default:
puts( "The number is not 1 or 2" );
break;
}
===========================================================
Error: Missing break statement in the statements for the first case.
Correction: Add a break statement at the end of the statements for the first case. This
is not necessarily an error if you want the statement of case 2: to execute every time the
case 1: statement executes.
The number is 1
The number is 2
==============================================================
d) The following code should print the values 1 to 10.
n = 1;
while ( n < 10 )
printf( "ud ", n++ );
=========================================================
change "ud" by "%d" and while must be n<=10
===============================================================
*/
#include<stdio.h>

int main(){
 int n=1;
 n = 1;
 while ( n <= 10 )
 printf( "%d ", n++ );
}
