#include <stdio.h>

int tab[100];

void add(int table[],int val){
  int k = 0;
  while (table[k]!=-1)
    k ++;
  table[k]=val;
}

void display(int table[]){
  int k =0;
  while(table[k]!=-1){
    printf("%i\n",table[k]);
    k ++;
  }
}

int means(int table[]){
  int k =0, sum =0;
  while (table[k]!=-1){
    sum += table[k];
    k ++;
  }
  return sum;
}

void main() { 
   tab[0] = -1; 
   add(tab,12); add(tab,16);
   display(tab);
   printf("Mean: %i\n", means(tab) );
}
