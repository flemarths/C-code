#include <stdio.h>
#include <stdlib.h>

void main (){

  float a=356.1203, b=7.1293, q=0 ;

  while (a>b) {

    a-=b ;
    q++ ;
  }
  printf("le couple recherche est (%f,%f).\n",q,a);
}
