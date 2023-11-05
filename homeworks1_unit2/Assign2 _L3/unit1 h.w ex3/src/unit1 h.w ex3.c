#include <stdio.h>
#include <stdlib.h>

int main()
{

    float x;
    float y;
    float z;

    printf("\r\nenter 3 numbers\r\n");
    fflush(stdin); fflush(stdout);
    scanf("%f %f %f",&x,&y,&z);

    if(x>=y&&x>=z)

   printf("\r\nthe largest number = %f \r\n",x);
    fflush(stdin); fflush(stdout);
        if(y>=x&&y>=z)

         printf("\r\nthe largest number =%f \r\n",y);
        fflush(stdin); fflush(stdout);

        if(z>=x&&z>=y)
         printf("\r\nthe largest number =%f \r\n",z);
        fflush(stdin); fflush(stdout);

}
