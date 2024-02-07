/*
 ============================================================================
 Name        : W2string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{


 char s[5000],i;

    printf("enter the string\r\n");
    fflush(stdin); fflush(stdout);

 scanf("%s",s);
 for(i=0;s[i]!='\0';i++);

      printf("the length of string :%d\r\n",i);

}
