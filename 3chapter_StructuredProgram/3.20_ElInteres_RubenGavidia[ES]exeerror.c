/*3.20 El interés simple para un préstamo se calcula mediante la fórmula:
interés = préstamo * tasa * días / 365;
La fórmula anterior asume que tasa es la tasa de interés anual, y por lo tanto incluye la división entre 365 (días). Desarrolle
un programa que introduzca préstamo, tasa y días para varios préstamos, y que calcule y despliegue el
interés simple para cada préstamo, utilizando la fórmula anterior. A continuación se muestra un ejemplo del diálogo
de entrada/salida:
====================================================================================================================================================
Introduzca el monto del préstamo (-1 para terminar): 1000.00
Introduzca la tasa de interés: .1
Introduzca el periodo del préstamo en días: 365
El monto del interés es $100.00
Introduzca el monto del préstamo (-1 para terminar): 1000.00
Introduzca la tasa de interés: .08375
Introduzca el periodo del préstamo en días: 224
El monto del interés es $51.40
Introduzca el monto del préstamo (-1 para terminar): 10000.00
Introduzca la tasa de interés: .09
Introduzca el periodo del préstamo en días: 1460
El monto del interés es $3600.00
Introduzca el monto del préstamo (-1 para terminar): -1
====================================================================================================================================================
*/ 
#include<stdio.h> 

float prestamo;
int tasa;
unsigned int counter=0;
float interes=0;
int diasDelPrestamo;
int main(){ 
    
    printf("Introduzca el monta dal prestamo (-1 para terminar): ");
    scanf("%f",&prestamo);
        
    while(prestamo!=-1){
        counter++;
        printf("\nIntroduzca el porcentaje de la tasa de  interes: \n");
        scanf("%d",&tasa);
        
        tasa=tasa/100;
       
        printf("\nIntroduzca el periodo del prestamo en dias: ");
        scanf("%d",&diasDelPrestamo);
        
        interes =(float) prestamo * tasa * diasDelPrestamo / 365;
        printf("\nEl monto del interes es: %0.2f$",interes);
     printf("\nIntroduzca el monto del prestamo (-1 para terminar): \n");
        scanf("%d",&prestamo);
}

}
