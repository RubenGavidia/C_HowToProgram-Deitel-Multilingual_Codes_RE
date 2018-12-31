/*5.7 Encuentre el error en cada uno de los segmentos de programa y explique cómo puede corregir dicho error (vea también el ejercicio 5.50):

a) int g( void ){
printf( “Dentro de la funcion g\n” );
}
int h( void ){
printf( “Dentro de la función h\n” );
}

b) int suma( int x, int y ){
return x + y;
}

c) int suma( int n ){
if ( n == 0 )
return 0;
else
return (n + suma( n – 1 ));
}

d) void f( float a ){
float a;
printf( “%f”, a );
return 0;
}

e) void producto( void ){
int a, b, c, resultado;
printf( “Introduzca tres enteros: ” )
scanf( “%d%d%d”, &a, &b, &c );
resultado = a * b * c;
printf( “El resultado es %d”, resultado );
return 0;
}
*/
