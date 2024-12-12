#include <stdio.h>
int main(){
  system("chcp 65001>nul");

  int num1, num2;

  printf("Digite dois numeros inteiros: ");
  scanf("%d %d", &num1, &num2);
  int soma = num1 + num2;
  printf("A some é:  %d\n", soma);
  return 0;
}



