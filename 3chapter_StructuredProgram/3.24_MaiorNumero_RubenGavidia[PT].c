/*3.24 O processo de encontrar o maior n�mero (i.e., o m�ximo de um conjunto de n�meros) � usado
freq�entemente em aplica��es computacionais. Por exemplo, um programa que determinasse o
vencedor de um concurso de vendas receberia o n�mero de unidades vendidas por vendedor. O
vendedor que tivesse vendido mais unidades venceria o concurso. Escreva um pseudoc�digo e
depois um programa em C que receba uma s�rie* de 10 n�meros, determine o maioj deles e o
imprima. Sugest�o: Seu programa deve usar tr�s vari�veis da seguinte maneira:

contador: Um contador para contar at� 10 (i.e., para controlar quantos n�meros foram
fornecidos e
para determinar quando todos os 10 n�meros foram processados),

num: O n�mero atual fornecido ao programa,

maior: O maior n�mero encontrado em cada instante.

pseudocodigo:
 ingresa n�mero de unidades vendidas por vendedor

    sim
  
    
    

*/


#include<stdio.h>


int main(){
    int contador=1,numero=0,maior=0;

        while(contador<=10){
                 printf("Numero de unidades vendidas por vendedor%d:",contador);
            scanf("%d",&numero);  
         
            if(numero>=maior){
             maior = numero; 
            }
            
            contador++;
        }
          printf( "El Maior Numero es: %d\n", maior );
    
}
