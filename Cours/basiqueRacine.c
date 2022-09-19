#include <stdio.h>

void main () {

  float v = 2.0, r=1.0, d=0.1 ;

  while (d>0.00001) {

    if ( ((r+d)*(r+d))-v < 0)
      r = r + d ;
    else
      d = d / 10.0 ;
  }

  printf("La racine de %f est %f\n",v,r) ;
  
}

