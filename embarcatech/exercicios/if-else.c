#include <stdio.h>

int main() {

  /*
    . > Maior (a maior b)
    . < Menor (a menor b)
    . >= Maior Igual (a maior igual b)
    . <= Menor Igual (a menor igual b)
    . != Nao igual ou Diferente (a diferente de b)
    . == Igual (a igual b)
  */

  int a, b;

  printf("Insira o valor de A \n");
  scanf("%d", &a);

  printf("Insira o valor de B \n");
  scanf("%d", &b);

  if (a > b) {
    printf("%d eh maior que %d", a, b);
  }

  else if(a == b){
    printf("%d eh igual a %d", a, b);
    
  }
  
  else {
    printf("%d eh menor que %d", a, b);
  }

  return 0;
}