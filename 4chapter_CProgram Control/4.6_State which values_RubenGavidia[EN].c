/*4.6 State which values of the control variable x are printed by each of the following for statements:
a) for ( x = 2; x <= 13; x += 2 ) {
printf( "%u\n", x );
}
//2+4+6+8+10+12
b) for ( x = 5; x <= 22; x += 7 ) {
printf( "%u\n", x );
}
//5+12+19
c) for ( x = 3; x <= 15; x += 3 ) {
printf( "%u\n", x );
}
//3+6+9+12
d) for ( x = 1; x <= 5; x += 7 ) {
printf( "%u\n", x );
}
//1
e) for ( x = 12; x >= 2; x -= 3 ) {
printf( "%d\n", x );
}
//12 9 6 3
*/
#include<stdio.h>

int main(){
    int x;
    for ( x = 5; x <= 22; x += 7 ) {
    printf( "%u\n", x );
    }
}
