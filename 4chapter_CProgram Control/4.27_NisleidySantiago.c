/*(Pythagorean Triples) A right triangle can have sides that are all integers. The set of three integer values for the sides of a right triangle is called a Pythagorean triple. These three sides must satisfy the relationship that the sum of the squares of two of the sides is equal to the square of the hypotenuse. Find all Pythagorean triples for side1, side2, and the hypotenuse all no larger than 500.
Use a triple-nested for loop that simply tries all possibilities. This is an example of “brute-force” computing. It’s not aesthetically pleasing to many people. But there are many reasons why these techniques are important. First, with computing power increasing at such a phenomenal pace, solutions that would have taken years or even centuries of computer time to produce with the technology of just a few years ago can now be produced in hours, minutes or even seconds. Recent microprocessor chips can process a billion instructions per second! Second, as you’ll learn in more advanced computer science courses, there are large numbers of interesting problems for which there’s no known algorithmic approach other than sheer brute force. We investigate many kinds of problem-solving methodologies in this book. We’ll consider many brute-force approaches to vari- ous interesting problems.
-------------------------------------------------------------------------
(Triples Pitagóricos.) Un triángulo recto puede tener todos sus lados enteros. Al conjunto de tres valores enteros
para los lados del triángulo se le llama Triple Pitagórico. Estos tres lados deben satisfacer la relación que indica
que la suma de los cuadrados de los lados es igual al cuadrado de la hipotenusa. Encuentre todos los Triples Pitagó-
ricos para lado1, lado2 y la hipotenusa que no sean mayores que 500. Utilice un triple for anidado que intente
todas las posibilidades. Éste es un ejemplo de computación de “fuerza bruta”. No es muy estético para mucha gente.
Pero existen muchas razones por las cuales esta técnica es importante. Primero, con el fenomenal incremento en el
poder de las computadoras, las soluciones que hubieran tardado años o incluso siglos con la tecnología de hace tan
sólo un par de años, ahora puede realizarse en horas, minutos o incluso segundos. Los recientes chips con micro-
procesadores pueden procesar ¡mil millones de instrucciones por segundo! Segundo, como aprenderá en cursos de
computación más avanzados, existe un gran número de problemas interesantes para los cuales no se conocen un
método o algoritmo conocido que no sea el de la fuerza bruta. En este libro, investigamos muchos tipos de técnicas
para resolver problemas. Aplicaremos muchos métodos de fuerza bruta para distintos problemas interesantes.
*/
# include <stdio.h>
int main(){
  int a = 0, b = 0, c = 0;
printf("lado 1 \t lado 2  hipotenusa\n\n");
  for(a = 1; a <= 500; a++){
    for(b = 1; b <= 500; b++){
      for(c = 1; c <= 500; c++){
        //si c = 1, dame valor de a y de b en ese momento,pero como a y b no tienen valores enteros cuando c = 1, no da valor, el primer valor es cuando c= 5, asi a=3 y b=4, tomando como valor simultaneo a= 4 y b= 3*/
        if((c*c) == (a*a) + (b*b)){
          printf(" %d \t %d \t %d \t\n", a, b, c);
        }
      }
    }
  }
  return 0;
}
