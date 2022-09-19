#include <stdio.h>
#include <math.h>

void main (){

  float a = 1.0, eps=0.00001,fa= 0.5*(a+(2/a));
  while(fabs(a-0.5*(a+(2/a))) >= eps ) {
    fa = 0.5*(a+(2/a));
    a = fa ;
  }
  printf("la racine de 2 est %G\n",fa);
}
