/*
 ============================================================================
 Name        : w2. Author      : mona
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{

int x,count;
unsigned long long int factorial=1;

printf("\r\n enter an integer:\r\n");
fflush(stdin); fflush(stdout);
scanf("%d",&x);

if (x>0)
{
 for(count=0;count<=x;++count)
{
    factorial+=count;
}
 printf("\r\nfactorial = %ul\r\n",factorial);
 fflush(stdin); fflush(stdout);
}




else
printf("\r\nerror!!!factorial of negative number does not exist");

}
