#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;

printf("\r\nenter an alphabet\r\n");
fflush(stdin); fflush(stdout);
scanf("%c",&x);

   if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')

    printf("\r\n %c is vowel\r\n",x);

     else
    printf("\r\n %c is constant\r\n",x);



}
