/*(De Morgan’s Laws) In this chapter, we discussed the logical operators && , || , and ! . DeMorgan’s Laws can sometimes make it more convenient for us to express a logical expression. These laws state that the expression !( condition1 && condition2 ) is logically equivalent to the expression(! condition1 || ! condition2 ) . Also, the expression !( condition1 || condition2 ) is logically equivalent to the expression (! condition1 && ! condition2 ) . Use De Morgan’s Laws to write equivalent expressions for each of the following, and then write a program to show that both the original expression and the new expression in each case are equivalent.
a) !( x < 5 ) && !( y >= 7 )
b) !( a == b ) || !( g != 5 )
c) !( ( x <= 8 ) && ( y > 4 ) )
d) !( ( i > 4 ) || ( j <= 6 ) )
---------------------------------------------------------------------
(Leyes de De Morgan.) En este capítulo explicamos los operadores lógicos &&, ||, y !. Algunas veces, las leyes de De Morgan hacen más conveniente para nosotros el uso de expresiones lógicas. Estas leyes establecen que la expresión !(condicion1 && condicion2) es lógicamente equivalente a la expresión (!condicion1 || !condicion2). Utilice las leyes de De Morgan para escribir expresiones equivalentes para cada una de las siguientes expresiones lógicas, y después escriba un programa que muestre que en cada caso, tanto la expresión original como la nueva expresión son equivalentes.
a) !( x < 5 ) && !( y >= 7 )
b) !( a == b ) || !( g != 5 )
c) !( ( x <= 8 ) && !( y > 4 ) )
d) !( ( i > 4 ) || ( j <= 6 )*/

# include <stdio.h>
int main(){

  printf("EQUIVALENTE: LEYES DE MORGAN\n\n");
  int x=2, y=8;

  if(!( x < 5 ) && !( y >= 7 )){
    !(( x < 5 ) || ( y >= 7 ));
    printf("(!( x < 5 ) && !( y >= 7 )) -----> !(( x < 5 ) || ( y >= 7 ))\n");
  }

  int a=1, b=0, g=3;
  if(!( a == b ) || !( g != 5 )){
    !(( a == b ) && ( g != 5 ));
    printf("(!( a == b ) || !( g != 5 ))----->!(( a == b ) && ( g != 5 ))\n");
  }

  if(!( x <= 8 ) && !( y > 4 )){
    !(( x <= 8 ) || ( y > 4 ));
    printf("(!( x <= 8 ) && !( y > 4 ))----->!(( x <= 8 ) || ( y > 4 ))\n");
  }

  int i=1, j=3;
  if(!(( i > 4 ) || ( j <= 6 ))){
    (!( i > 4 ) && !( j <= 6 ));
    printf("(!(( i > 4 ) || ( j <= 6 )))----->(!( i > 4 ) && !( j <= 6 ))\n");
  }
return 0;
}
