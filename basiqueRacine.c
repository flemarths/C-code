#include <stdio.h>

int main () {

  float v = 2.0 ;

  float r = 1.0 ;

  float d = 0.1 ;

 debut :

  if ( d > 0.00001 ) {

    if ( ((r+d)*(r+d))-v < 0) {

      r = r + d ;
    }
    else  {

	d = d / 10.0 ;
     }
  }
  else  {

      printf("La racine de %f est %f\n",v,r) ;
      return 0;
  }
  
  
  goto debut ;
}

