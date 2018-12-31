/*3.46 Una empresa quiere transmitir datos mediante la línea telefónica, pero les preocupa que sus teléfonos pudieran estar
intervenidos. Todos sus datos se transmiten como enteros de cuatro dígitos. A usted le pidieron que escriba un
programa que encripte sus datos de manera que se transmitan de forma más segura. El programa debe leer un entero
de cuatro dígitos y encriptar la información de la siguiente manera: reemplace cada dígito con el residuo de la
división entre 10 de la suma de dicho dígito más 7. Posteriormente, intercambie el primer dígito con el tercero, e
intercambie el segundo dígito con el cuarto. Luego despliegue el entero encriptado. Escriba un programa por separado
que introduzca un entero encriptado de cuatro dígitos y lo desencripte para formar el número original.
*/

#include<stdio.h>

int main(){
int x,a,b,c,d;

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
