/*5.47 (Craps Game Modification) Modify the craps program of Fig. 5.14 to allow wagering. Package as a function the portion of the program that runs one game of craps. Initialize variable bank Balance to 1000 dollars. Prompt the player to enter a wager . Use a while loop to check that wager is less than or equal to bankBalance , and if not, prompt the user to reenter wager until a valid wager is entered. After a correct wager is entered, run one game of craps. If the player wins, increase bankBalance by wager and print the new bankBalance . If the player loses, decrease bankBalance by wager , print the new bankBalance , check whether bankBalance has become zero, and if so print the message, "Sorry. You busted!" As the game progresses, print various messages to create some “chatter” such as, "Oh, you're going for broke, huh?" or "Aw cmon, take a chance!" or "You're up big..
Now's the time to cash in your chips!"
----------------------------------------------------------------------
Modifique el programa del juego de craps que aparece en la figura 5.10 para permitir las apuestas. Empaque, como una función, la porción del programa que ejecuta un juego de craps. Inicialice la variable saldoBanco en $1000. Indique al usuario que introduzca la apuesta. Utilice un ciclo while para verificar si la apuesta es menor o igual que saldoBanco; si no es así, indique al usuario que reintroduzca la apuesta hasta que lo haga con una cantidad válida. Después de introducir una cantidad válida, ejecute el juego de craps. Si el jugador pierde, disminuya saldoBanco con el importe de la apuesta, imprima el nuevo saldoBanco, verifique si saldoBanco es igual que cero, y si lo es imprima el mensaje “Lo siento. ¡Su saldo se agoto!” Durante el transcurso del juego, imprima mensajes para crear algo de “conversación” tal como “mhm..., parece que va a la quiebra”, o “¡Ande!, atrévase!”, o “¡Ya estás grande, ahora es el momento de arriesgarse!”
*/
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int tiraDados();
void craps(float saldoBanco, float apuesta);
enum Estatus{ CONTINUA, GANA, PIERDE};

int main(){
  float saldoBanco = 1000.00;
  float apuesta;

  printf("Introduzca la apuesta que desea:\n");
  scanf("%f", &apuesta);


      while((apuesta > saldoBanco)||(apuesta < 1)){
        printf("Invalido/Introduzca nuevamente la apuesta:\n");
        scanf("%f", &apuesta);
      }
printf("la apuesta es: %.2f\n", apuesta);

craps(saldoBanco, apuesta);
return 0;
}
////////////////////////////////////////////////////////////////////////
void craps(float saldo, float apuest){

int suma;/* suma del tiro de datos */
int miPunto; /* punto ganado */

enum Estatus estatusJuego; /* puede contener CONTINUA, GANA o PIERDE */

/* randomiza el generador de números aleatorios mediante la función time */
srand( time( NULL ) );
suma = tiraDados(); /* primer tiro de los dados */

/* determina el estado del juego basado en la suma de los dados */
    switch( suma ) {

          /* gana en el primer tiro */
          case 7:
          case 11:
          estatusJuego = GANA;
          break;

          /* pierde en el primer tiro */
          case 2:
          case 3:
          case 12:
          estatusJuego = PIERDE;
          break;

          /* recuerda el punto */
          default:
          estatusJuego = CONTINUA;
          miPunto = suma;
          printf( "Su punto es %d\n", miPunto );
          break; /* opcional */
          } /* fin de switch */

      /* mientras el juego no se complete */
      while ( estatusJuego == CONTINUA ) {
      suma = tiraDados(); /* tira de nuevo los dados */

          /* determina el estatus del juego */
          if ( suma == miPunto ) { /* gana por punto */
            estatusJuego = GANA; /* fin del juego, el jugador gana */
          } /* fin de if */
          else {
            if ( suma == 7 ) { /* pierde al tirar 7 */
            estatusJuego = PIERDE; /* termina el juego, el jugador pierde */
          }
          }
          }

      /* despliega mensaje de triunfo o derrota */
      if ( estatusJuego == GANA ) { /* ¿Ganó el jugador? */
        saldo = saldo + apuest;
          if(saldo == 0){
            printf("Lo siento. ¡Su saldo se agoto!\n");
          }
        printf( "El jugador gana , su nuevo saldo es :%.2f\n", saldo );
      }
      else { /* el jugador pierde */
        saldo = saldo - apuest;
        if(saldo == 0){
          printf("Lo siento. ¡Su saldo se agoto!\n");
        }
        printf( "El jugador pierde, su nuevo saldo es :%.2f\n", saldo );
      }

      } /* fin de main */

      /////////////////////////PROTOTIPO///////////////////////
  /* tiro de dados, calcula la suma y despliega los resultados */

  int tiraDados( void ){
  int dado1;/* primer dado */
  int dado2;/* segundo dado */
  int sumaTemp; /* suma de los dados */

    dado1 = 1 + ( rand() % 6 ); /* toma el aleatorio para el dado1 */
    dado2 = 1 + ( rand() % 6 ); /* toma el aleatorio para el dado2 */
    sumaTemp = dado1 + dado2;/* suma el dado1 y el dado2 */

    /* despliega los resultados de este tiro */
    printf( "El jugador tiro %d + %d = %d\n", dado1, dado2, sumaTemp);
    return sumaTemp; /* devuelve la suma de los dados */
    } /* fin de la función tiraDados */
