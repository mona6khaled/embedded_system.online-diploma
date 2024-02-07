/*
 ============================================================================
 Name        : lec4.c
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
  int m;
float degrees[10];

for(m=0;m<10;m++)
{
printf("\n enter the student %d degree:",m+1);
fflush(stdin); fflush(stdout);
scanf("%f",&degrees[m]);

}

for(m=0; m<10; m++)
{
 printf("\nstudent %d degree is %f",m+1,degrees[m]);
}

}
