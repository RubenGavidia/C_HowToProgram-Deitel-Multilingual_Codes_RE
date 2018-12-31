/*3.20 El inter�s simple para un pr�stamo se calcula mediante la f�rmula:
inter�s = pr�stamo * tasa * d�as / 365;
La f�rmula anterior asume que tasa es la tasa de inter�s anual, y por lo tanto incluye la divisi�n entre 365 (d�as). Desarrolle
un programa que introduzca pr�stamo, tasa y d�as para varios pr�stamos, y que calcule y despliegue el
inter�s simple para cada pr�stamo, utilizando la f�rmula anterior. A continuaci�n se muestra un ejemplo del di�logo
de entrada/salida:
====================================================================================================================================================
Introduzca el monto del pr�stamo (-1 para terminar): 1000.00
Introduzca la tasa de inter�s: .1
Introduzca el periodo del pr�stamo en d�as: 365
El monto del inter�s es $100.00
Introduzca el monto del pr�stamo (-1 para terminar): 1000.00
Introduzca la tasa de inter�s: .08375
Introduzca el periodo del pr�stamo en d�as: 224
El monto del inter�s es $51.40
Introduzca el monto del pr�stamo (-1 para terminar): 10000.00
Introduzca la tasa de inter�s: .09
Introduzca el periodo del pr�stamo en d�as: 1460
El monto del inter�s es $3600.00
Introduzca el monto del pr�stamo (-1 para terminar): -1
====================================================================================================================================================
*/
#include<stdio.h>
float prestamo,tasa,diasDelPrestamo;
 unsigned int counter=0;
 float interes=0;
int main(){ 
        printf("\nIntroduzca el monto del prestamo (-1 para terminar): ");
        scanf("%f",&prestamo);
    while(prestamo!=-1){

        printf("\nIntroduzca el porcentaje de la tasa de %% interes %%: \n");
        scanf("%f",&tasa);
        printf("value interes old: %f\n",tasa);
        tasa=tasa/100;
        printf("value new interes: %f\n",tasa);
        printf("\nIntroduzca el periodo del prestamo en dias: ");
        scanf("%f",&diasDelPrestamo);
        interes = prestamo * tasa * diasDelPrestamo / 365;
        printf("\nEl monto del interes es: %0.2f$",interes);
     printf("\nIntroduzca el monto del prestamo (-1 para terminar): ");
        scanf("%d",&prestamo);
}

}
