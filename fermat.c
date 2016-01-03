#include <stdio.h>
#include <stdlib.h>

int main () {
  long n, p, q, x, y, xx, yy, e;

  printf ("Factor a postitive odd number by Fermat's method\n");
  printf ("N = \n"); scanf ("%ld", &n);
  printf ("Factoring %ld\n", n);
  if (n<1) { printf ("N must be greater than zero\n"); return 1;}
  if (n%2==0) { printf ("N must be odd\n"); return 1;}

  xx = 1; yy = 1; e = yy-xx - n;

  while (e != 0) if (e<0) { e+=yy; yy += 2; }
                 else     { e-=xx; xx += 2; }

  x = (xx-1)/2; y = (yy-1)/2;
  q = y + x; p = y - x;
  printf ("%ld*%ld=%ld\n", p, q, n);
}
