#include <stdio.h>
#include <stdlib.h>

void main (){

  char a ;

  printf("Entrez le caractere : \n");
  scanf("%c",&a);

  if (a >= 'A' &&  a<= 'Z')
    printf("Caractere majuscule\n");
  else
    printf("Caractere minuscule\n");
}
