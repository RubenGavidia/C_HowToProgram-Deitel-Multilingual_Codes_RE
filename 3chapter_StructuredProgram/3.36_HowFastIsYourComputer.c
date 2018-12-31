/*
3.36 (How Fast is Your Computer?) How can you determine how fast your own computer really
operates? Write a program with a while loop that counts from 1 to 1,000,000,000 by 1s. Every time
the count reaches a multiple of 100,000,000, print that number on the screen. Use your watch to
time how long each 100 million repetitions of the loop takes


*/

#include<stdio.h>

int main(){
    
  int n=0,r=0;
    while(n<1000000000){
    if(n%1000000==0) {
        printf("reach %d out\n",n);
        r++;
    }
    n++;
   
    }
    printf("Finish the counter r is: %d\n",r);
    
    
}
