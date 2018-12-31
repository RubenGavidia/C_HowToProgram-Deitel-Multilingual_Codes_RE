/*5.9 Un estacionamiento cobra la cuota mínima de $2.00 por las tres primeras horas de estacionamiento. El estacionamiento cobra $0.50 adicional por hora o fracción después del tiempo mínimo. El cobro máximo para cualquier periodo de 24 horas es de $10.00. Suponga que ningún automóvil se estaciona por más de 24 horas, al mismo tiempo
que otro. Escriba un programa que calcule e imprima los cobros por cada uno de los tres clientes que se estacionaron ayer en el estacionamiento. Debe introducir el número de horas que cada cliente pasó estacionado ahí. Su programa debe imprimir los resultados en una forma tabular, y debe calcular e imprimir los recibos de las percepciones de ayer. El programa debe utilizar la función calculaImporte para determinar el importe de cada cliente. Sus
salidas deben ser semejantes al formato siguiente:
Automóvil         Horas         Importe
1                 1.5           2.00
2                 4.0           2.50
3                 24.0          10.00
Total             29.5          14.50
*/
#include <stdio.h>
float calculaImporte(float horas);

float horas = 0;
float importe;
float total_horas;
float total_importe;
float importe_cliente = 0;
float importe_a, importe_b, importe_c;

int main(){
    float a, b, c;
    printf("Para el vehiculo 1, escriba las horas de estacionamiento\n");
    scanf("%f", &a);

    printf("Para el vehiculo 2, escriba las horas de estacionamiento\n");
    scanf("%f", &b);

    printf("Para el vehiculo 3, escriba las horas de estacionamiento\n");
    scanf("%f", &c);
    total_horas = a+b+c;

    importe_a = calculaImporte(a);
    importe_b = calculaImporte(b);
    importe_c = calculaImporte(c);

    total_importe = importe_a + importe_b + importe_c;

    //imprime:
    printf("Vehiculo Horas Importe\n");
    printf("1\t%.2f\t%.2f\n",a, importe_a);
    printf("2\t%.2f\t%.2f\n",b, importe_b);
    printf("3\t%.2f\t%.2f\n",c, importe_c);
    printf("total\t%.2f\t%.2f\n",total_horas, total_importe);
}

float calculaImporte(float horas){
  if(horas <= 3)
    return(2);

  else if((horas > 3) && (horas<24))
    return(2 + (horas-3)*0.50);

  else if(horas >= 24)
    return(10);
}
