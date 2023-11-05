#include <stdio.h>
#include <stdlib.h>

int main()
{

int x,count,sum=0;
printf("\r\n enter an integer:\r\n");
fflush(stdin); fflush(stdout);
scanf("%d",&x);
for(count=0;count<=x;++count)
{
    sum+=count;
}


printf("\r\n sum= %d\r\n",sum);
fflush(stdin); fflush(stdout);

}
