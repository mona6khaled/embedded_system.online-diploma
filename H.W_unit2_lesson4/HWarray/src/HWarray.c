/*
 ============================================================================
 Name        : HWarray.c
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
 float a[2][2],b[2][2],c[2][2];
 int i,j;


printf("please enter the elements of the first matrix\r\n");
fflush(stdin); fflush(stdout);

 for(i=0;i<2;i++)
 for(j=0;j<2;j++)
 {
     printf("enter a%d%d:",i+1,j+1);
     fflush(stdin); fflush(stdout);

     scanf("%f",&a[i][j]);
      }

printf("please enter the elements of the second matrix\r\n");
fflush(stdin); fflush(stdout);

for(i=0;i<2;i++)
 for(j=0;j<2;j++)
 {
     printf("enter b%d%d:",i+1,j+1);
     fflush(stdin); fflush(stdout);

     scanf("%f",&b[i][j]);
 }

 for(i=0;i<2;i++)
 for(j=0;j<2;j++)
 {
 c[i][j]=a[i][j]+b[i][j];
 }


 printf("the sum of matrix is:\r\n");
 fflush(stdin); fflush(stdout);

 for(i=0;i<2;i++)
 for(j=0;j<2;j++)
 {
     printf("%.1f",c[i][j]);
     fflush(stdin); fflush(stdout);

     if (j==1)
     printf("\r\n");
 }

}


