/*
 ============================================================================
 Name        : ex4.c
 Author      : mona
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>

int main()
{
	int A, B, sum;


	printf("\r\nEnter two integers : \r\n");
	fflush(stdin); fflush(stdout);
	scanf("%d%d", &A, &B);


	sum = A + B;


	printf("Sum : %d", sum);
	fflush(stdin); fflush(stdout);
	return 0;

}
