// Exercice 2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

  float xA, yA, xB, yB;
  double DIST ;
  
  printf("Saisir la valeur de xA :\n");
  scanf("%f",&xA);

  printf("Saisir la valeur de yA :\n");
  scanf("%f",&yA);

  printf("Saisir la valeur de xB :\n");
  scanf("%f",&xB);

  printf("Saisir la valeur de yB :\n");
  scanf("%f",&yB);

  DIST = sqrt(pow(xB-xA,2)+pow(yB-yA,2));

  printf("La distance entre A et B est %f\n",DIST);

  return 0;

}

  
// Exercice 3

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


// Exercice 4

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


// Exercice 5


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
  
