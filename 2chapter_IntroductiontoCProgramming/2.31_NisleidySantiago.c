/*programa que calcula los cuadrados y los cubos de los números 0 a 10, y que utiliza tabuladores para desplegarlos en una tabla de valores:*/
#include <stdio.h>
int main(){
int a=0, b=1, c=2, d=3, e=4, f=5, g=6, h=7, i=8, j=9, k=10;
int a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1;
int a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2;

//cuadrados:
a1 = a*a;
b1 = b*b;
c1 = c*c;
d1 = d*d;
e1 = e*e;
f1 = f*f;
g1 = g*g;
h1 = h*h;
i1 = i*i;
j1 = j*j;
k1 = k*k;
//cubos:
a2 = a*a*a;
b2 = b*b*b;
c2 = c*c*c;
d2 = d*d*d;
e2 = e*e*e;
f2 = f*f*f;
g2 = g*g*g;
h2 = h*h*h;
i2 = i*i*i;
j2 = j*j*j;
k2 = k*k*k;
//imprime:
printf("***tabla de valores***\n \n");
printf("numero cuadrado cubo\n");
printf("%d \t %d \t %d \t\n", a, a1, a2);
printf("%d \t %d \t %d \t\n", b, b1, b2);
printf("%d \t %d \t %d \t\n", c, c1, c2);
printf("%d \t %d \t %d \t\n", d, d1, d2);
printf("%d \t %d \t %d \t\n", e, e1, e2);
printf("%d \t %d \t %d \t\n", f, f1, f2);
printf("%d \t %d \t %d \t\n", g, g1, g2);
printf("%d \t %d \t %d \t\n", h, h1, h2);
printf("%d \t %d \t %d \t\n", i, i1, i2);
printf("%d \t %d \t %d \t\n", j, j1, j2);
printf("%d \t %d \t %d \t\n", k, k1, k2);

return 0;
} 
