/*Guess the Number) Write a C program that plays the game of “guess the number” as follows: Your program chooses the number to be guessed by selecting an integer at random in the range
1 to 1000. The program then types:

I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess.

The player then types a first guess. The program responds with one of the following:

1. Excellent! You guessed the number!
Would you like to play again (y or n)?
2. Too low. Try again.
3. Too high. Try again.

If the player’s guess is incorrect, your program should loop until the player finally gets the number right. Your program should keep telling the player Too high or Too low to help the player “zero in” on the correct answer. [Note: The searching technique employed in this problem is called binary search. We’ll say more about this in the next problem.]
--------------------------------------------------------------------------
(/ * Adivina el número) Escribe un programa C que juegue al "adivinar el número" de la siguiente manera: Tu programa elige el número que se va a adivinar seleccionando un número entero al azar en el rango
1 a 1000. El programa luego escribe:

Tengo un número entre 1 y 1000.
¿Puedes adivinar mi número?
Por favor, escriba su primera suposición.

El jugador escribe una primera suposición. El programa responde con uno de los siguientes:

1. ¡Excelente! ¡Adivinaste el número!
¿Te gustaría jugar de nuevo (y o n)?
2. Demasiado bajo Inténtalo de nuevo.
3. Demasiado alto. Inténtalo de nuevo.

Si la conjetura del jugador es incorrecta, tu programa debería repetir hasta que el jugador finalmente obtenga el número correcto. Su programa debe seguir diciendo al jugador Demasiado alto o Demasiado bajo para ayudar al jugador a "poner en cero" la respuesta correcta. [Nota: la técnica de búsqueda empleada en este problema se llama búsqueda binaria. Vamos a decir más sobre esto en el próximo problema

*/
# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int num_player;

void adivina(int numero, int num_introducido_por_jugador);

int main(){
  int numero;
  numero = 1 + rand() % 1000;
//printf("numero = %d\n", numero);

  printf("Tengo un número entre 1 y 1000\n¿Puedes adivinar mi número?\nPor favor, escriba su primera suposición\n");
  scanf("%d",&num_player);
  adivina(numero, num_player);

  return 0;
}

void adivina (int numero, int num_introducido_por_jugador){
int c;

if(numero == num_introducido_por_jugador){
  printf("¡Excelente! ¡Adivinaste el número!\n");
  printf("te gustaria jugar de nuevo? introduzca 'y'(si), o 'n' (no)\n");
  scanf("%d", &c);
  c = getchar();
  if(c == 'y'){
    main();
}
  else
  printf("fin del juego\n");
  }

else if(num_introducido_por_jugador < numero){
  printf("Demasiado bajo Inténtalo de nuevo\n");
  printf("Tengo un número entre 1 y 1000\n¿Puedes adivinar mi número?\nPor favor, escriba su primera suposición\n");
  scanf("%d",&num_player);
  adivina(numero, num_player);

  //adivina(numero, num_introducido_por_jugador);
}
else if(num_introducido_por_jugador > numero){
  printf("Demasiado alto. Inténtalo de nuevo\n");
  printf("Tengo un número entre 1 y 1000\n¿Puedes adivinar mi número?\nPor favor, escriba su primera suposición\n");
  scanf("%d",&num_player);
  adivina(numero,num_player);
}
}
