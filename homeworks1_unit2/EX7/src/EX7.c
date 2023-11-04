/*
 ============================================================================
 Name        : EX7.c
 Author      : mona
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x ,y ;
 printf("Enter value of x: ");


  scanf("%f", &x);
  printf("Enter value of y: ");
  fflush(stdin); fflush(stdout);
  scanf("%f", &y);


    x = x + y;
    y = x - y;
    x = x - y;

    printf("\nAfter swapping,value of x = %f\n", x);
printf("After swapping, value of y = %f", y);
fflush(stdin); fflush(stdout);

}
