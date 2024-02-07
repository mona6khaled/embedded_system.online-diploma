/*
 ============================================================================
 Name        : W3_array.c
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

   float m[2][3];
     int r,c;
     float n[3][2];


     for (r=0;r<2;r++)

    {
       for (c=0;c<3;c++)

        {
        printf("enter the item(%d,%d):",r,c);
        fflush(stdin);
        fflush(stdout);
        scanf("%f",&m[r][c]);
       }

     }


    printf("the matrix is\n");


   for (r=0;r<2;r++)
    {
        for (c=0;c<3;c++)
   {
        printf("%2.2f",m[r][c]);
   }
       printf("\r\n");

    }

       printf("the transpose matrix is\n");
           for (r=0;r<3;r++)
    {
       for (c=0;c<2;c++)
   {
       n[r][c]= m[c][r];
}
    }

for (r=0;r<3;r++)
    {
       for (c=0;c<2;c++)
   {
        printf("%2.2f",n[c][r]);
   }
 printf("\r\n");
    }
    }




















