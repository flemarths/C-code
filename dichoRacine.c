#include <stdio.h>
#include <math.h>

int main () {

  float a = 1.0 ;
  float b = 2.0 ;
  float eps = 0.00001 ;
  float c ;

 debut :

  c = (b+a)/2;
  if (c*c-2 > 0) {
    b = c ;
  }
  else {
    a = c ;
  }
  if ( fabs(c*c-2) < eps ) {
    printf("la racine de 2 est %G\n",c);
    return 0;
  }
  goto debut;
}
