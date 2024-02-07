/*
 ============================================================================
 Name        : W5_array.c
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

  int a[30],element,num,i;
  printf("enter the number of elements\r\n");
  fflush(stdin); fflush(stdout);

  scanf("%d",&num);
  printf("enter the value\r\n");
  fflush(stdin); fflush(stdout);

  for(i=0;i<num;i++)
  {
      scanf("%d",&a[i]);
  }
   printf("eneter the elements to be searched\r\n");
   fflush(stdin); fflush(stdout);

   scanf("%d",&element);
   i=0;
   while (i<num&&element!=a[i])
   {
       i++;
   }

   if(i<num)
   {
       printf("number at the location = %d",i+1);

   }
else
   {
       printf("number not be found");
   }

}
