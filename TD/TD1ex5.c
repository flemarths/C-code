#include <stdio.h>
#include <stdlib.h>

void main(){

  int x,s,p=0;
  printf("Joueur1 quel est votre nombre ?\n");
  scanf("%i",&x);
  
  while (p!=x){
    printf("Joueur2 quel est votre proposition ?\n");
    scanf("%i%",&p);
    s++;

    if (x > p)
      printf("le nombre est plus grand\n");
    if (x < p)
      printf("le nombre est plus petit\n");
      }
 
  
  
  printf("trouve ! ton score est %i\n",s);
  }
  
  
