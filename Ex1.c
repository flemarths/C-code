#include <stdio.h>

int main(){

  int v = 1;
  int increment = 2;

 debut :

  v = v + increment ;
  increment = increment +1 ;

  if (increment > 100) {

    printf("Le nombre est %d\n", v);

    return 0;
      }
  goto debut;
}
