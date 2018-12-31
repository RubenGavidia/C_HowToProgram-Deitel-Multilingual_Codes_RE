/*5.17 Escriba una función multiplo que determine para un par de enteros, si el segundo es múltiplo del primero. La función debe tomar dos argumentos enteros y devolver 1 (verdadero) si el segundo es un múltiplo del primero, y de lo contrario 0 (falso). Utilice esta función en un programa que introduzca una serie de pares de enteros.*/

# include <stdio.h>
#include <stdbool.h>
_Bool x = 1, y = 0;

_Bool multiplo(int a, int b);

int main(){
  int num1,num2;
  printf("introduzca dos numeros:\n");
  scanf("%d \t %d", &num1, &num2);

  multiplo(num1, num2);
}
_Bool multiplo(int a, int b){

  if(b % a == 0)
    return(printf("verdadero %d\n", x ));

  else
    return(printf("falso %d\n", y ));

}
