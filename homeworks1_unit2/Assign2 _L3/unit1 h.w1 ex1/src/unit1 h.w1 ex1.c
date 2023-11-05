/*
 ============================================================================
 Name        : w1.c
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
    int x;

printf("\r\nenter an integer you want to check\r\n");
fflush(stdin); fflush(stdout);


scanf("%d",&x);

if(x%2==0)


    printf("\r\n %d is even\r\n",x);

  else

    printf("\r\n %d is odd\r\n",x);

fflush(stdin); fflush(stdout);

}
