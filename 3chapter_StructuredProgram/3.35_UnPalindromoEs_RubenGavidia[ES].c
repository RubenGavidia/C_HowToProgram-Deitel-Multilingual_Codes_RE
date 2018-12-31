/*3.35 Un palíndromo es un número o una frase de texto que se lee igual hacia delante y hacia atrás. Por ejemplo, cada
uno de los siguientes números de cinco dígitos, son palíndromos: 12321, 55555, 45554, y 11611. Escriba un programa
que lea números de cinco dígitos y que determine si es o no, un palíndromo. [Pista: Utilice los operadores
de división y residuo para separar el número en sus dígitos individuales.]*/

#include<stdio.h>

int main(){
    
    int n,a,b,c,d,e;
    printf("Ingrese El Numero de 5 digitos para Verificar si es Palindromo:   ");
    scanf("%d",&n);
    
   a = n/10000;
   b = n / 1000 % 10;
   c = n / 100 % 10;
   d = n / 10 % 10;
   e = n % 10;
        
   
   if(a==e && b==d){
       printf("\nEs Palindromo\n");
       }
    else printf("\nNo es Palindromo\n");
    
    ((a==e)*(b==d)) ? printf("Es Palindromo Booleano\n")  : printf("No es Palindromo Booleano\n");
    
    
    
    
}
