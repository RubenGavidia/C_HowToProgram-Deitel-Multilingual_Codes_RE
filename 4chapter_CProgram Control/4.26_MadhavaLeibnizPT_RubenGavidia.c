#include <stdio.h>

  main( ) {
  int x;
    for (x = 1; x <= 10; x++) {
      if (x == 5)
      break; /* sai do loop somente se x == 5 */
      printf ("%d ", x);
      }
      printf ("\n Saiu do loop em x == %d\n", x); return 0;
  }
