#include <stdio.h>
#include <stdlib.h>

void main (){

  float a ;
  printf("quels est le dividende ? \n");
  scanf("%[^\n]",a);

  printf("le dividende est %G \n",a);
  exit(EXIT_SUCCESS);
}
