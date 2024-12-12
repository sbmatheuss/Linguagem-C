#include <stdio.h>
#include <math.h>

int main()
{
  int num1, num2, soma;

  printf("Digite o primeiro e segundo numero:");
  scanf("%d %d", &num1, &num2);

  soma = num1 + num2;
  printf("soma: %d", soma);

  return 0;
}