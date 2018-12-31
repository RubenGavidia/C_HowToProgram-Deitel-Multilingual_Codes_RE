/* Modifique esta Figura 3.10
Análisis de los resultados de un examen, para validar sus entradas. Para cualquier entrada, si el valor introducido es diferente a 1 o 2, continúe el ciclo hasta que el usuario digite un valor correcto.
Análisis de los resultados de un examen */

#include <stdio.h>
int main(){
int aprobados = 0;
int reprobados = 0;
int estudiante = 1;
int resultado;

/* procesa 10 estudiantes mediante un ciclo controlado por contador */

	while ( estudiante <= 10 ) {
	printf( "Para estudiante %d ,introduzca el resultado \t", estudiante);
	scanf( "%d", &resultado );

		if((resultado != 1) && (resultado != 2)){

			if(resultado >= 10){
			aprobados = aprobados + 1;
	    	}

			else if(resultado < 10){
			reprobados = reprobados + 1;
			}

			estudiante = estudiante + 1;	
	}

	else { 
	printf("calificacion invalida %d \n", estudiante);
	} 
}

//mostrar:
printf( "Aprobados %d\n", aprobados );
printf( "Reprobados %d\n", reprobados );

	/* si aprobaron más de ocho estudiantes, imprime “objetivo alcanzado” */
	if ( aprobados > 8 ) {
	printf( "Objetivo alcanzado\n" );
	}

return 0;
}
