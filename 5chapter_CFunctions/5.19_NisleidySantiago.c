/*5.19 Escriba una función que despliegue en el margen izquierdo de la pantalla un cuadrado sólido de asteriscos cuyas medidas se especifiquen mediante el parámetro lado. Por ejemplo, si lado es 4, la función despliega:
****
****
****
****

*/
#include <stdio.h>
int despliega(int lado);

int main(){
  unsigned int x;
  printf("Introduzca el numero de asteriscos que desea para cada lado del cuadrado :\n");
  scanf("%u", &x);
  despliega(x);
}

int despliega(int lado){
  int i, j;
  for(i=1; i<=lado;i++){
    for(j=1;j<=lado; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
