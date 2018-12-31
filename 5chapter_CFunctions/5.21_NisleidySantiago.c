/*5.21 (Project: Drawing Shapes with Characters) Use techniques similar to those developed in Exercises 5.19–5.20 to produce a program that graphs a wide range of shapes.
-----------------------------------------------------------------------
Utilice técnicas similares a las empleadas en los ejercicios 5.19 y 5.20 para producir un programa que grafique un número variado de figuras.
*/
# include <stdio.h>
# include<stdlib.h>
# include<string.h>

int cuadrado(int lado, char caracter1);
int rombo(int lado, char caracter2);
int triangulo(int lado, char caracter3);

int main(){
  int x;
  char c1, c2, c3;

  printf("Introduzca el numero de asteriscos para cada lado en la creacion de las figuras:\n");
  scanf("%d", &x);
  printf("Introduzca el caracter que desea para la figura de cuadrado\n");
  getchar();
  scanf("%c", &c1);
  printf("Introduzca el caracter que desea para la figura de rombo\n");
  getchar();
  scanf("%c", &c2);
  printf("Introduzca el caracter que desea para la figura de triangulo\n");
  getchar();
  scanf("%c", &c3);

  printf("cuadrado:\n\n");
  cuadrado(x, c1);
  printf("rombo:\n\n");
  rombo(x, c2);
  printf("triangulo:\n\n");
  triangulo(x, c3);
}
//////////////FUNCION CUADRADO /////////////////////
int cuadrado(int lado, char caracter1){
  int i, j, k;
  for(i=1; i<=lado;i++){
    for(j=1;j<=lado; j++){
      printf("%c", caracter1);
    }
    printf("\n");
  }
  return 0;
}
int rombo(int lado, char caracter2){
int i, j, k;
//parte de arriba:
for(i=0; i<=4; i++) {
      for(j=0; j<(4-i); j++){
        printf( " " );
      }
      for(k=0; k<(1+(i*2)); k++){
        printf( "%c", caracter2 );
      }
  printf( "\n" );
}
//parte de abajo:
for(i=3; i>=0; i--){
      for(j=0; j<(4-i); j++){
        printf( " " );
      }
      for(k=0; k<(1+(i*2)); k++){
        printf( "%c", caracter2 );
      }
  printf( "\n" );
}
return 0;
}

///////////////FUNCION TRIANGULO///////////////
int triangulo(int lado, char caracter3){
  int c, d;

  for(c = 1; c <= lado; c++){
    for(d = 1;d <= c; d++){
      printf("%c", caracter3);
    }
    printf("\n");
  }
}
