#include <stdio.h>

int main () {

  int i = 1 ;
  int r = 1 ;
 loop :
  r = r * i ;
  i = i + 1 ;
  if (i <= 4) {
    goto loop;
  }
  else {
    printf("r vaut %i\n",r);
  }
  return 0;
}
