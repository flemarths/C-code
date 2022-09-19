#include <stdio.h>
#include <math.h>

void main () {

  float a = 1.0, b=2.0, eps=0.00001, c ;
  c = (b+a)/2;
  
  while (fabs(c*c-2) >= eps ) {

    c = (b+a)/2;
    if (c*c-2 > 0) {
      b = c ;
    }
    else {
      a = c ;
    }
  }
  printf("la racine de 2 est %G\n",c);
}
