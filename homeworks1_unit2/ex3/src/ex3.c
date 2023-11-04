/*
 ============================================================================
 Name        : ex3.c
 Author      : mona
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
    float a, b, product;
    printf("Enter two numbers: ");
    fflush(stdin); fflush(stdout);

    scanf("%f %f", &a, &b);

    product = a * b;

    fflush(stdin); fflush(stdout);

    printf("Product = %f", product);
  fflush(stdout);

}
