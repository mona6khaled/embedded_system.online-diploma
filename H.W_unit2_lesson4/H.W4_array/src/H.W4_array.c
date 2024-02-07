/*
 ============================================================================
 Name        : W4_array.c
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

int arr[30],elements,num,i,location;
printf("number of elements\r\n");
fflush(stdin); fflush(stdout);

scanf("%d",&num);
for(i=0;i<num;i++)
    {
      scanf("%d",&arr[i]);
}


printf("enter the elements\r\n");
fflush(stdin); fflush(stdout);


  scanf("%d",&elements);

printf("enter the location\r\n");
fflush(stdin); fflush(stdout);

  scanf("%d",&location);


for(i=num;i>=location;i--)
{
    arr[i]=arr[i-1];
}
num++;
arr[location-1]=elements;

for(i=0;i<num;i++)

    printf("%d",arr[i]);

}
