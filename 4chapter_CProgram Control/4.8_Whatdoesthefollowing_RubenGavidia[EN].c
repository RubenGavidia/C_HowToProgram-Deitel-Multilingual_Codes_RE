/*
THIS CODE PRINT

*/
#include <stdio.h>

 // function main begins program execution
 int main( void )
 {
 unsigned int x;
 unsigned int y;
 unsigned int i;
 unsigned int j;

 // prompt user for input
 printf( "%s", "Enter two unsigned integers in the range 1-20: " );
 scanf( "%u%u", &x, &y ); // read values for x and y

 for ( i = 1; i <= y; ++i ) { // count from 1 to y

 for ( j = 1; j <= x; ++j ) { // count from 1 to x
 printf( "%s", "@" ); // output @
 } // end inner for

 puts( "" ); // begin new line
 } // end outer for
 } // end function main
