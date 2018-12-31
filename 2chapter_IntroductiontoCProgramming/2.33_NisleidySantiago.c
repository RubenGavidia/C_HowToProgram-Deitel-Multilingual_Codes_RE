/*(Car-Pool Savings Calculator) Research several car-pooling websites. Create an application
that calculates your daily driving cost, so that you can estimate how much money could be saved by
car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic
congestion. The application should input the following information and display the user’s cost per
day of driving to work:
a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon.
d) Parking fees per day.
e) Tolls per day.

-----crea una aplicacion ue calcule el costo diario de manejo, en el q puedas estimar cuanto dinero puedes ahorrar del carro ---la aplicacion debe introducir la siguiente informacion y mostrar el costo por usuario por dia manejando al trabajo
*/
#include <stdio.h>
int main(){
	float miles;
	float cost_gasoline;
	float miles_gallon;
	int parking;
	int tolls;
	float total_gasoline;
	float total_park;
	float total_tool;
	float cost_parking;
	float cost_tolls;
	float total_all;

	printf("CAR POOL SAVING CALCULATOR \n");
	printf("Total miles driven per day \n");
	scanf("%f", &miles);// 10 miles
	printf("Cost per gallon of gasoline\n"); 
	scanf("%f", &cost_gasoline);//1 dollar
	printf("Average miles per gallon \n");//gasto de galon por milla
	scanf("%f", &miles_gallon); // 2 gallons
	printf("Parking fees per day \n");
	scanf("%d", &parking); //2
	printf("cost parking \n");
	scanf("%f", &cost_parking);
	printf("Tolls per day \n");//peajes por dia
	scanf("%d", &tolls);//2
	printf("cost tolls \n");
	scanf("%f", &cost_tolls);
	
	// cost in dollars driving per day
	total_gasoline = miles_gallon * cost_gasoline * miles ;
	// cost parking
	total_park = parking * cost_parking;
	// cost tolls
	total_tool = tolls * cost_tolls;
	 
	//total:
	total_all = total_gasoline + total_park + total_tool;
	//mostrar:
	printf("**CAR POOL SAVING CALCULATOR** \n DATES : \n");

	printf("Total miles driven per day :\t %2.f \n", miles);
	printf("Cost per gallon of gasoline:\t %2.f\n", cost_gasoline);
	printf("Average miles per gallon :\t %2.f\n", miles_gallon);
	printf("Parking fees per day :\t %d\n", parking);
	printf("Tolls per day :\t %d\n", tolls);

	printf("\n*Costs per day driving to work* \n\n");
	printf("cost gasoline gallon per mile :\t %2.f dollars \n", total_gasoline);
	printf("cost parking per day :\t %2.f dollars \n", total_park);
	printf("cost tolls per day :\t %2.f dollars \n", total_tool);
	printf("cost total per day:\t %2.f dollars\n", total_all);


	return 0;
}
