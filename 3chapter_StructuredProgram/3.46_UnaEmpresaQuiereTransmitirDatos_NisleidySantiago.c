/*3.46 Una empresa quiere transmitir datos mediante la l�nea telef�nica, pero les preocupa que sus tel�fonos pudieran estar
intervenidos. Todos sus datos se transmiten como enteros de cuatro d�gitos. A usted le pidieron que escriba un
programa que encripte sus datos de manera que se transmitan de forma m�s segura. El programa debe leer un entero
de cuatro d�gitos y encriptar la informaci�n de la siguiente manera: reemplace cada d�gito con el residuo de la
divisi�n entre 10 de la suma de dicho d�gito m�s 7. Posteriormente, intercambie el primer d�gito con el tercero, e
intercambie el segundo d�gito con el cuarto. Luego despliegue el entero encriptado. Escriba un programa por separado
que introduzca un entero encriptado de cuatro d�gitos y lo desencripte para formar el n�mero original.
*/
//NO SE PUEDE COMPILAR
#include<stdio.h>

int main(){
int x,a,b,c,d;
int n=0; //puesto por undecleared variable
printf("Ingrese 4 digitos: \n");
scanf("%d",&x);

a= x/1000;
b=x/100%10;
c= x/10%10;
d= x%10;
printf("1)%d %d %d %d\n",a,b,c,d);

a+=7;
b+=7;
c+=7;
d+=7;
printf("2)%d %d %d %d\n",a,b,c,d);

n=a*100+b*100+c*100+d*100;
printf("%d",n);

}
