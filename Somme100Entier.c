# include <stdio.h>

int main() {

  int v = 0 ;
  int i = 1 ;

 debut :

  v = v + i;
  i = i +1;

  if (i>100) {

    printf("Le nombre v vaut : %d\n",v);

    return 0;

  }
  
  goto debut;
}
