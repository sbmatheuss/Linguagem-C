#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(){
  double raio, area;

  printf("Digite o valor do raio da circuferencia: ");
  scanf("%lf", &raio);

  area = PI * pow(raio, 2);

  printf("A area da circuferencia e: %2lf\n", area);
}