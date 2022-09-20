#include <stdio.h>
#include <stdlib.h>



int puissance(int n,int p){

  int r=1 ;
  while (p!=0){
    r*=n;
    p --;
  }
  printf("%i\n",r);
  return 0;
} 

int puissance_for(int n, int p){
  int r=1;
  for(int i=0;i<p;i ++)
    r*=n;
  printf("%i\n",r);
  return 0;
}



void main(){
  puissance(2,8);
  puissance_for(2,16);
}
