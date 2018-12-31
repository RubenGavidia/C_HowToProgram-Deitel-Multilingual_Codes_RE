/* 3.28 What does the following program print?
 printing ++++++++ when the count % 2 be 0
 and printing **** when count % 2 be 1
 
 when is odd print ++++++++
 even ****
*/
#include <stdio.h>


int main( void )
{  
    unsigned int count = 1; // initialize count
    int r;
 while ( count <= 10 ) { // loop 10 times

// output line of text
 puts( count % 2 ? "****" : "++++++++" );
 printf("\ncountvalue:%d\n",count);
 r=count%2;
 printf("\n%d\n",r);
 ++count; // increment count
 } // end while
 } // end function main
