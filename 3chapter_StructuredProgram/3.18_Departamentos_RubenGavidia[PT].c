/*3.18 Desenvolva um programa em C que determine se um cliente de uma loja de departamentos
excedeu o limite de cr�dito de sua conta. Os seguintes dados de cada cliente est�o dispon�veis:
1. N�mero da conta
2. Saldo devedor no in�cio do m�s
3. Total de itens cobrados do cliente no m�s em quest�o
4. Total de cr�ditos aplicados � conta do cliente no m�s cm quest�o.
5. Limite de cr�dito permitido.
O programa deve receber esses dados, calcular o novo saldo (= saldo devedor inicial +
cobran�as � cr�ditos) e determinar se o novo saldo supera o limite de cr�dito do cliente. Para
os clientes cujo limite de cr�dito foi excedido, o programa deve exibir o n�mero da conta do
cliente, o limite de cr�dito e a mensagem "Limite de Cr�dito Excedido". 
=============================================================================================================================================
):
Entre com o numero da conta (-1 para finalizar 100
Entre com o saldo inicial: 5394.78
Entre com o total de cobran�as: 1000.00
Entre com o total de cr�ditos: 500.00
Entre com o limite de credito: 5500.00
Conta: 100
Limite de credito: 5500.00
Saldo: 5894.78
Limite de Credito Excedido.
Entre com o numero da conta (-1 para finalizar): 200
Entre com o saldo inicial: 1000.00
Entre com o total de cobran�as: 123.45
Entre com o total de cr�ditos: 321.00
Entre com o limite de credito: 1500.00
Entre com o numero da conta (-1 para finalizar): 300
Entre com o saldo inicial: 500.00
Entre com o total de cobran�as: 274.73
Entre com o total de cr�ditos: 100.00
Entre com o limite de credito: 800.00
Entre com o numero da conta (-1 para finalizar): -1


=============================================================================================================================================
*/
#include<stdio.h>


int main(){
        int contador=0;
        float nConta,saldoIni,cobrancas,totalCreditos,limiteDeCredito,saldo;  
    printf("Entre com o numero da conta (-1 para finalizar):"); 
    scanf("%f",&nConta);
    while(nConta!=-1){
    contador++;
    printf("\nEntre com o saldo inicial: ");
    scanf("%f",&saldoIni);
    printf("\nEntre com o total de cobran�as: ");  
    scanf("%f",&cobrancas);
    printf("\nEntre com o total de cr�ditos: ") ;
    scanf("%f",&totalCreditos);
    printf("\nEntre com o limite de credito: "); 
    scanf("%f",&limiteDeCredito);
        saldo = saldoIni + cobrancas - totalCreditos;
    printf("Conta: %f \n",nConta);
    printf("limiteDeCredito: %f \n",limiteDeCredito);
    printf("Saldo: %f\n",saldo);
    
    if(saldo>limiteDeCredito) printf("Limite de Cr�dito Excedido\n");
        else printf("kkkkk\n");
    printf("Entre com o numero da conta (-1 para finalizar):");
    scanf("%f",&nConta);
    }
   printf("endl\n");
   return 0;
}
