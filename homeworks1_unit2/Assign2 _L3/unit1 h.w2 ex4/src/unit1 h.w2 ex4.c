#include <stdio.h>
#include <stdlib.h>

int main()
{

    float x;


    printf("\r\enter a number\r\n");

    fflush(stdin); fflush(stdout);

    scanf("%f",&x);

    if(x>0)


            printf("\r\n %0.1f is positive\r\n",x);

    fflush(stdin); fflush(stdout);
        if(x<0)

          printf("\r\n %0.1f isnegative\r\n",x);
        fflush(stdin); fflush(stdout);

        if(x==0)

          printf("\r\n you entered 0 \r\n",x);
        fflush(stdin); fflush(stdout);
}
