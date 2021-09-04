#include <stdio.h>

int main(void) {
  double n1 =0;
  double n2=0;
  double s=0;
  double d=0;
  double m=0;
  double di=0;

 printf("digite o primeiro número: \n");
  scanf("%lf",& n1);
  printf("digite o segundo número: \n");
  scanf("%lf",& n2);
  s=n1+n2;
  d=n1/n2;
  m=n1*n2;
  di=n1-n2;
  printf("\n soma:%lf",s);

  printf("\n divisão: %lf",d);

  printf("\n multiplicação:%lf",m);

  printf("\n diferença:%lf",di);



}