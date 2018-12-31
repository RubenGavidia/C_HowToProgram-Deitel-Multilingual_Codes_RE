/*5.49 (Global Warming Facts Quiz) The controversial issue of global warming has been widely publicized by the film An Inconvenient Truth, featuring former Vice President Al Gore. Mr.Gore and a U.N. network of scientists, the Intergovernmental Panel on Climate Change, shared the 2007 Nobel Peace Prize in recognition of “their efforts to build up and disseminate greater knowledge about man-made climate change.” Research both sides of the global warming issue online (you might want to search for phrases like “global warming skeptics”). Create a five-question multiple-214 Chapter 5 C Functions choice quiz on global warming, each question having four possible answers (numbered 1–4). Be objective and try to fairly represent both sides of the issue. Next, write an application that administers the quiz, calculates the number of correct answers (zero through five) and returns a message to the user. If the user correctly answers five questions, print “Excellent”; if four, print “Very good”; if three or fewer, print “Time to brush up on your knowledge of global warming,” and include a list of some of the websites where you found your facts.
/*Computer-Assisted Instruction
As computer costs decline, it becomes feasible for every student, regardless of economic circumstance, to have a computer and use it in school. This creates exciting possibilities for improving the educational experience of all students worldwide as suggested by the next five exercises. [Note: Check out initiatives such as the One Laptop Per Child Project ( www.laptop.org ). Also, research “green” laptops—what are some key “going green” characteristics of these devices? Look into the Electronic Product Environmental Assessment Tool ( www.epeat.net ) which can help you assess the “greenness” of desktops, notebooks and monitors to help you decide which products to purchase.]
--------------------------------------------------------
5.49 (Prueba de Hechos del Calentamiento Global) El controvertido tema del calentamiento global ha sido ampliamente publicitado por la película An Inconvenient Truth, que cuenta con el ex vicepresidente Al Gore. El Sr. Gore y una red de científicos de la ONU, el Panel Intergubernamental sobre Cambio Climático, compartieron el Premio Nobel de la Paz 2007 en reconocimiento a "sus esfuerzos para crear y diseminar un mayor conocimiento sobre el cambio climático creado por el hombre". Investigue ambos lados del problema del calentamiento en línea (es posible que desee buscar frases como "escépticos del calentamiento global"). Cree una prueba de elección de cinco preguntas múltiples sobre el calentamiento global, con cuatro respuestas posibles (numeradas del 1 al 4). Sea objetivo y trate de representar imparcialmente ambos lados del problema. A continuación, escriba una aplicación que administre el cuestionario, calcule el número de respuestas correctas (de cero a cinco) y devuelva un mensaje al usuario. Si el usuario responde correctamente cinco preguntas, imprima "Excelente"; si son cuatro, imprima "Muy bien"; si tiene tres o menos, imprima "Tiempo para repasar su conocimiento del calentamiento global" e incluya una lista de algunos de los sitios web donde encontró sus datos.
Instrucción asistida por computadora
A medida que los costos de la computadora disminuyen, es factible que cada estudiante, independientemente de las circunstancias económicas, tenga una computadora y la use en la escuela. Esto crea posibilidades emocionantes para mejorar la experiencia educativa de todos los estudiantes en todo el mundo como lo sugieren los próximos cinco ejercicios. [Nota: Consulte iniciativas como One Laptop Per Child Project (www.laptop.org). Además, busque computadoras portátiles "verdes": ¿cuáles son algunas de las características clave de estos dispositivos que se vuelven "verdes"? Consulte la Herramienta de evaluación ambiental de productos electrónicos (www.epeat.net) que puede ayudarlo a evaluar el "verdor" de los equipos de sobremesa, portátiles y monitores para ayudarlo a decidir qué productos comprar.]*/
# include <stdio.h>
void pregunta1();
void pregunta2();
void pregunta3();
void pregunta4();
void pregunta5();

int main(){
  int pregunta1 = 0;
  int pregunta2 = 0;
  int pregunta3 = 0;
  int pregunta4 = 0;
  int pregunta5 = 0;
  int contador = 0;

printf("\t**CALENTAMIENTO GLOBAL**\n\n");

/////////////////////PREGUNTA 1//////////////////////////////////////
  printf("Pregunta 1:\n\n");
  printf("Cree ud. que los organismos internacionales han dado la suficiente importancia y soluciones al problema del calentamiento global ?\n Introduzca el numero de respuesta que considere correcto, e introduzca 'c' para continuar\n");
  printf("1 SI\n 2 NO\n 3 EN SU MAYORIA\n 4 EN ESCASAS OCASIONES\n\n");

  while ( ( pregunta1 = getchar() ) != 'c' ) {
        switch(pregunta1){
          case '1':
          break;

          case '2':
          break;

          case '3':
          ++contador;
            break;

          case '4':
          break;

          case '\t':
  				case ' ':
          case '\n':
  				break;

          default:
          printf("Introdujo una opcion incorrecta.Introduzca nuevamente.No olvide colocar 'c' para continuar\n\n" );
          break;

        }
      }

//---------------------------------------------------------------
printf("Pregunta 2:\n");
printf("Piensa ud. que se han implementado las medidas sificientes para acatar el problema ?\n Introduzca el numero de respuesta que considere correcto, e introduzca 'c' para continuar\n");
printf("1 SI\t 2 NO\t 3 EN SU MAYORIA\t 4 EN ESCASAS OCASIONES\n\n");

    while ( ( pregunta2 = getchar() ) != 'c' ) {
      switch(pregunta2){
        case '1':
        break;

        case '2':
        break;

        case '3':
        break;

        case '4':
        ++contador;
        break;

        case '\t':
        case ' ':
        case '\n':
        break;

        default:
        printf("Introdujo una opcion incorrecta.Introduzca nuevamente.No olvide colocar 'c' para continuar\n\n" );
        break;

      }
    }
//----------------------------------------------------------------------
  printf("Pregunta 3:\n");
  printf("Segun su conocimiento, seleccione cuales de las siguientes mencionadas a continuacion, son los principales factores que afectan al aumento a la problematica del calentamiento global\n" );
  printf("1 Uso de alimentos enlatados, migracion, uso del computador.\n2 Marginalidad, consumo de drogas, uso de material reciclable.\n 3 aumento de enfermedades en el mundo, extincion de animales\n4 Deforestacion, uso de aerosoles, quema de arboles, uso de sustancias toxicas en automoviles.\n\n");
  printf("NO OLVIDE COLOCAR 'c' PARA CONTINUAR....\n\n");

  while ( ( pregunta3 = getchar() ) != 'c' ) {
        switch(pregunta3){
          case '1':
          break;

          case '2':
          break;

          case '3':
          break;

          case '4':
          ++contador;
          break;

          case '\t':
  				case ' ':
          case '\n':
  				break;

          default:
          printf("Introdujo una opcion incorrecta.Introduzca nuevamente.No olvide colocar 'c' para continuar\n\n" );
          break;
        }
      }
    //................................................................
printf("Pregunta 4 \n");
printf("Cual cree ud. que deberia ser su mejor aporte para disminuir el calentamiento global?\n");
printf("1 Abandono de la educacion\n2 Planta arboles, crear conciencia y evitar la contamiancion\n 3 fomentar la educacion sexual y reproductiva\n 4 Uso adecuado de los automoviles\n\n");
printf("NO OLVIDE COLOCAR 'c' PARA CONTINUAR....\n\n");

while ( ( pregunta4 = getchar() ) != 'c' ) {

      switch (pregunta4){
        case '1':
        break;

        case '2':
        ++contador;
        break;

        case '3':
        break;

        case '4':
        break;

        case '\t':
        case ' ':
        case '\n':
        break;

        default:
        printf("Introdujo una opcion incorrecta.Introduzca nuevamente.No olvide colocar c para continuar\n\n" );
        break;
      }
}
printf("Pregunta 5\n");
printf("Segun su punto de vista, seleccione la opcion que considere que sea las mayores consecuencias de este terrible daño como lo es el calentamiento global\n");
printf("1 Aumento de la temperatura , cambio repentino del clima, descontrol estacionario\n2 desempleo, pobreza\n3 Guerra y crisis economica\n4 Deterioro del medio ambiente\n\n");
printf("NO OLVIDE COLOCAR 'c' PARA CONTINUAR....\n\n");

while ( ( pregunta5 = getchar() ) != 'c' ) {

          switch (pregunta5) {
            case '1':
              ++contador;
              break;

            case '2':
            break;

            case '3':
            break;

            case '4':
            break;

            case '\t':
    				case ' ':
            case '\n':
    				break;

            default:
            printf("Introdujo una opcion incorrecta.Introduzca nuevamente.No olvide colocar c para continuar\n\n" );
            break;
          }
        }

          printf("\t** PUNTUACION **\n");
          if(contador == 5)
          printf("\n (5 puntos) Excelente!\n");

          if(contador == 4)
          printf("\n(4 puntos ) Muy bien!\n");

          else if((contador >=0)&&(contador <= 3)){
            printf("(%d) puntos", contador);
          printf(" Tiempo para repasar su conocimiento del calentamiento global\n");
        }
return 0;
}
