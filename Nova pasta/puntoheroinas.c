
/*codigo para sacar cuenta del 10% de ventas en los malditos puntos de las heroinas*/

#include<stdio.h>
int main (){
 int data=0,total=0,i=0,perdido=0;
printf("Ingrese el monto del punto (presione -1 para finalizar)\n");
scanf("%d",&data);
  while(data!=-1){
   total+=data;
   printf("total=%d\n",total);
   printf("data=%d\n",data);
   i++;
   
//atom es elduro

    printf("Ingrese los datos presione -1 para finalizar\n");
    scanf("%d",&data);
  }
    perdido=data*0.10;
    total=data-perdido;
    printf("\nel total en ventas es %d",data);
    printf("\nel dinero perdido en porcentajees %d",perdido);
    printf("\nel dinero a transferir es %d",total);


}
