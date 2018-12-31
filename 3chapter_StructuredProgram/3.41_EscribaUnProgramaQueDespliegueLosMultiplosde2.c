/*3.41 Escriba un programa que despliegue los múltiplos del número entero 2, a saber 2, 4, 8, 16, 32, 64, y así sucesivamente.
Su ciclo no debe terminar (es decir, debe crear un ciclo infinito). ¿Qué sucede cuando ejecuta este programa?

4096
8192
16384
32768
65536
131072
262144
524288
1048576
2097152
4194304
8388608
16777216
33554432
67108864
134217728
268435456
536870912
1073741824 <----------------------------------------tamaño maximo de entero: ocurrio un desbordamiento arimetico


*/

#include<stdio.h> 

int main(){
    int n=2;
    while(n>0){
         printf("%d\n",n);
        n *= 2;
    }
}
