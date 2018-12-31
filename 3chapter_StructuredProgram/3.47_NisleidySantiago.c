/*3.47 (Target-Heart-Rate Calculator) While exercising, you can use a heart-rate monitor to see that your heart rate stays within a safe range suggested by your trainers and doctors. According to the American Heart Association (AHA), the formula for calculating your maximum heart rate in
beats per minute is 220 minus your age in years. Your target heart rate is a range that’s 50–85% of your maximum heart rate. [Note: These formulas are estimates provided by the AHA. Maximum and target heart rates may vary based on the health, fitness and gender of the individual. Always consult a physician or qualified health care professional before beginning or modifying an exercise program.]
	Create a program that reads the user’s birthday and the current day (each consisting of the month,day and year). Your program should calculate and display the person’s age (in years), the person’s maximum heart rate and the person’s target-heart-rate range.*/
/* Calculador de frecuencia cardiaca. Durante el ejercicio puede usar un monitor de frecuencia cardiaca para ver que su frecuencia cardiaca se mantenga dentro de un rango seguro sugerido por sus entrenadores y medicos. De acuerdo con la american heart asociations . La formula para calcular su frecuencia cardiaca maxima en latidos por minuto es 220 menos su edad en años. su frecuencia cardiaca objetivo es un rango que es 50 - 85 % de tu ritmo cardiaco maximo.. nota: estas formulas son estimaciones proporcionadas por la AHA . maximo y sus freci¿uecnias cardiacas objetivo pueden variar en funcion de la salud, la forma fisica y el sexo del individuo. siempre consulta un medico o un profesional de la salud calificado antes de comenzar o modificar un programa de ejercicios.
cree un programa que cree el cumpleaños del usuario y el dia actual (cada uno compuesto por el mes dia y año). su programa debe calcular y mostrar la edad de la persona en años, la frecuencia cardiaca maxima y el rango de frecuencia cardiaca objetivo de la persona.
 */
# include <stdio.h>
int main(){
	int day_b, month_b, year_b;
	int day_a, month_a, year_a;
	int age_year, age_month, age_day;
	int frec_card_max;
	int frec_card_obj;
	int rango1;
	int rango2;

	printf("\t *Target-Heart-Rate Calculator* \t\n\n");
	printf("Enter your birthday (day/month/year):\n");
	scanf("%d %d %d", &day_b, &month_b, &year_b);

	printf("Enter fecha actual :\n");
	scanf("%d %d %d", &day_a, &month_a, &year_a);

	age_year = year_a - year_b;
	age_month = month_a - month_b;
	age_day = day_a - day_b;

		if((age_month < 0) || (age_day < 0)){
			age_year = age_year - 1;
		}

	frec_card_max = 220 - age_year;
	rango1 = 0.5 * frec_card_max;
	rango2 = 0.85 * frec_card_max;

	printf("\n Target-Heart-Rate Calculator Results :\n");
	printf("Age : %d\nMaximum heart rate : %d\ntarget heart rate range : %d to %d\n", age_year, frec_card_max, rango1, rango2);
	printf("\n");


	return 0;
}
