
/*Making a Difference
2.32 (Body Mass Index Calculator) We introduced the body mass index (BMI) calculator in
Exercise 1.14. The formulas for calculating BMI are
or
Create a BMI calculator application that reads the user’s weight in pounds and height in inches
(or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
the user’s body mass index. Also, the application should display the following information from
the Department of Health and Human Services/National Institutes of Health so the user can evaluate
his/her BMI:

BMI VALUES
Underweight: less than 18.5
Normal: between 18.5 and 24.9
Overweight: between 25 and 29.9
Obese: 30 or greater

[Note: In this chapter, you learned to use the int type to represent whole numbers. The BMI calculations
when done with int values will both produce whole-number results. In Chapter 4 you’ll
learn to use the double type to represent numbers with decimal points. When the BMI calculations
are performed with doubles, they’ll both produce numbers with decimal points—these are called
“floating-point” numbers.]*/
#include<stdio.h>
int main(){

      float BMI,kg,meters;
      printf("Enter heigh in meters: ");
      scanf("%f",&meters);
        printf("Enter weight in kilograms: ");
      scanf("%f",&kg);
     BMI=kg/(meters*meters);
  printf( "Your BMI is: %f\n", BMI );
  if(BMI>30 && BMI<40){printf("\n\n\n         It's Fucking Gringo Obese\n\n");}
      else if(BMI>25 && BMI<=30){printf("\n\n           The Gringo is Overweight\n\n");}
        else if(BMI>18.5 && BMI<25){printf("\n\n          Body Mass Index is Normal\n\n");}
          else if(BMI>13 && BMI<18.5){printf("\n\n            Underweight\n\n");}
          else {printf("\n\n      You're Anormal!!!\n\n");}
  printf( "____________________________________\n|BMI Values:    \n" );
  printf( "Underweight:\tless than 18.5\n" );
  printf( "Normal:\t\tbetween 18.5 and 24.9\n" );
  printf( "Overweight:\tbetween 25 and 29.9\n" );
  printf( "Obese:\t\t30 or greater\n____________________________________\n" );

 return(0);
}
