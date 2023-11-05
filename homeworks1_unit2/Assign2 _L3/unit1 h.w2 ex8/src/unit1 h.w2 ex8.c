/*
 ============================================================================
 Name        : w2.c
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
   char x;
   float num1,num2;
   printf("\r\n enter operator neither + or - or * or divide\r\n");
   fflush(stdin); fflush(stdout);
   scanf("%c",&x);

printf("\r\n enter two operands\r\n");
fflush(stdin); fflush(stdout);
  scanf("%f%f",&num1,&num2);

  switch(x)
  {

   case'+':
  printf("\r\n %0.1f + %0.1f =%0.1f\r\n" ,num1,num2,num1+num2);
  fflush(stdin); fflush(stdout);
  break;

      case'-':
  printf("\r\n %0.1f - %0.1f =%0.1f\r\n",num1,num2,num1-num2);
  fflush(stdin); fflush(stdout);
  break;


      case'*':
  printf("\r\n %0.1f * %0.1f =%0.1f\r\n",num1,num2,num1*num2);
  fflush(stdin); fflush(stdout);
  break;


      case'/':
  printf("\r\n %0.1f / %0.1f = %0.1f\r\n",num1,num2,num1/num2);
  fflush(stdin); fflush(stdout);
  break;


  }
}
