/*(Otro problema de asociación de else). Modifique el siguiente código para producir la salida que aparece a continuación. Utilice las técnicas de sangrado apropiadas. No debe hacer cambio alguno que no sea el de insertar llaves.
El compilador ignora el sangrado de un programa. Eliminamos el sangrado del siguiente código para hacer más interesante el problema. [Nota: Es posible que no sea necesario hacer modificaciones.]

if ( y == 8 )
if ( x == 5 )
printf( “@@@@@\n”);
else
printf( “#####\n”);
printf( “$$$$$\n”);
printf( “&&&&&\n”);

a) Si suponemos que x = 5 y y = 8, se produce la siguiente salida.
@@@@@
$$$$$
&&&&&

b) Si suponemos que x = 5 y y = 8, se produce la siguiente salida.
@@@@@

c) Si suponemos que x = 5 y y = 8, se produce la siguiente salida.
@@@@@
&&&&&

d) Si suponemos que x = 5 y y = 7, se produce la siguiente salida. [Nota: Las últimas tres instrucciones printf son parte de una instrucción compuesta.]
#####
$$$$$
&&&&&
*/

//SOLUCIONES:
	//a)
#include <stdio.h>
int main(){
	int x = 5, y = 8;

if ( y == 8 ){
printf( "@@@@@\n");


if ( x == 5 ){
printf( "$$$$$\n");
printf( "&&&&&\n");

	}
}

else{
printf( "#####\n");
}
return 0;
}

	//b)

#include <stdio.h>
int main(){
	int x = 5, y = 8;

if ( y == 8 ){
}
if ( x == 5 ){
	printf( "@@@@@\n");
	}

else{
printf( "#####\n");
printf( "$$$$$\n");
printf( "&&&&&\n");
}
return 0;
}

	//c)
#include <stdio.h>
int main(){
	int x = 5, y = 8;

if ( y == 8 ){
printf( "@@@@@\n");


if ( x == 5 ){
printf( "$$$$$\n");

	}
}

else{
	printf( "&&&&&\n");

printf( "#####\n");
}
return 0;
}

	//d)

#include <stdio.h>
int main(){
	int x = 5, y = 7;

if ( y == 8 ){
printf( "@@@@@\n");
	if ( x == 5 ){

	}
}

else{

printf( "#####\n");
printf( "$$$$$\n");
printf( "&&&&&\n");

}
return 0;
}
