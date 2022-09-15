#include <stdio.h>
#include <math.h>

int main (){

  float a = 1.0 ;
  float eps = 0.00001 ;
  float fa ;

 debut :

  fa = 0.5*(a+(2/a));
  if ( fabs(a-fa) < eps ) {

    printf("la racine de 2 est %G\n",fa);
    return 0;
  }
  a = fa ;
  goto debut;
}
