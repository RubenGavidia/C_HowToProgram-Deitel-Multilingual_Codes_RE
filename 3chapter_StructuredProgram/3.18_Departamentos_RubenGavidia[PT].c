/*3.18 Desenvolva um programa em C que determine se um cliente de uma loja de departamentos
excedeu o limite de crédito de sua conta. Os seguintes dados de cada cliente estão disponíveis:
1. Número da conta
2. Saldo devedor no início do mês
3. Total de itens cobrados do cliente no mês em questão
4. Total de créditos aplicados à conta do cliente no mês cm questão.
5. Limite de crédito permitido.
O programa deve receber esses dados, calcular o novo saldo (= saldo devedor inicial +
cobranças — créditos) e determinar se o novo saldo supera o limite de crédito do cliente. Para
os clientes cujo limite de crédito foi excedido, o programa deve exibir o número da conta do
cliente, o limite de crédito e a mensagem "Limite de Crédito Excedido". 
=============================================================================================================================================
):
Entre com o numero da conta (-1 para finalizar 100
Entre com o saldo inicial: 5394.78
Entre com o total de cobranças: 1000.00
Entre com o total de créditos: 500.00
Entre com o limite de credito: 5500.00
Conta: 100
Limite de credito: 5500.00
Saldo: 5894.78
Limite de Credito Excedido.
Entre com o numero da conta (-1 para finalizar): 200
Entre com o saldo inicial: 1000.00
Entre com o total de cobranças: 123.45
Entre com o total de créditos: 321.00
Entre com o limite de credito: 1500.00
Entre com o numero da conta (-1 para finalizar): 300
Entre com o saldo inicial: 500.00
Entre com o total de cobranças: 274.73
Entre com o total de créditos: 100.00
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
    printf("\nEntre com o total de cobranças: ");  
    scanf("%f",&cobrancas);
    printf("\nEntre com o total de créditos: ") ;
    scanf("%f",&totalCreditos);
    printf("\nEntre com o limite de credito: "); 
    scanf("%f",&limiteDeCredito);
        saldo = saldoIni + cobrancas - totalCreditos;
    printf("Conta: %f \n",nConta);
    printf("limiteDeCredito: %f \n",limiteDeCredito);
    printf("Saldo: %f\n",saldo);
    
    if(saldo>limiteDeCredito) printf("Limite de Crédito Excedido\n");
        else printf("kkkkk\n");
    printf("Entre com o numero da conta (-1 para finalizar):");
    scanf("%f",&nConta);
    }
   printf("endl\n");
   return 0;
}
