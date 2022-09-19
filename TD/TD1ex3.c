#include <stdio.h>
#include <stdlib.h>

void main () {

  int t,h,m,s ;
  printf("Quelle est la durée en secondes ?\n");
  scanf("%i",&t);
  
  h = t/3600;
  m = (t%3600)/60;
  s = ((t%3600)%60);

  printf("%i : %i : %i \n",h,m,s);
}

  
