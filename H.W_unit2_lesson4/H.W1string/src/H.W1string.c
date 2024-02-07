/*
 ============================================================================
 Name        : W1string.c
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
 int count=0,i;
 char c[5000],ch;
 printf("enter string\r\n");
 fflush(stdin); fflush(stdout);

 gets(c);
 printf("enter the character to find the frequency\r\n");
 fflush(stdin); fflush(stdout);

 scanf("%c",&ch);
 for(i=0;c[i]!='\0';i++)
 {
     if(ch==c[i])
        count++;
 }
 printf("frequency of %c = %d",ch,count);

}
