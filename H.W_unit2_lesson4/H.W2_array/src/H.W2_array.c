/*
 ============================================================================
 Name        : W2_array.c
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
 int n,i;
 float num[100],sum=0,avarage;
 printf("enter the number of data\r\n");
 fflush(stdin); fflush(stdout);

 scanf("%d",&n);
 while(n>100||n<=0)
 {
     printf("error put the number in the range (1to100)\r\n");
 printf ("enter the nmber again\r\n");
 fflush(stdin); fflush(stdout);

 scanf("%d",&n);

 }


for(i=0;i<n;i++)
{
    printf("enter the num\n",i+1);
    fflush(stdin); fflush(stdout);

    scanf("%f",&num[i]);
    sum+=num[i];
}

avarage=sum/n;
printf("the avarage =%f ",avarage);

}
