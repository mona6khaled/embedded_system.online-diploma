/*
 ============================================================================
 Name        : ex1,2.c
 Author      : mona
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	printf("c programming\r\n");
	  fflush(stdout);
    int x;

    printf("\r\n enter a integer:\r\n");
    fflush(stdin); fflush(stdout);

    scanf("%d",&x);

    printf("\r\n you entered:%d ",x);
    fflush(stdin); fflush(stdout);
}

