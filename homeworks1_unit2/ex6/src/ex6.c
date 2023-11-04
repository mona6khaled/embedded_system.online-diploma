#include<stdio.h>
int main() {
  float a, b, c;
  printf("Enter first number: ");

  scanf("%f", &a);

  printf("Enter second number: ");
  fflush(stdin); fflush(stdout);

  scanf("%f", &b);


  c = a;
  a = b;
  b = c;
  fflush(stdin); fflush(stdout);

  printf("\nAfter swapping,value of a = %f\n", a);
  printf("After swapping,value of b = %f", b);
  fflush(stdin); fflush(stdout);

}
