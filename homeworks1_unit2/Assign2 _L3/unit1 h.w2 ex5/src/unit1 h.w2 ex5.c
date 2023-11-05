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

    char x;


    printf("\r\enter a character :\r\n");
    fflush(stdin); fflush(stdout);



    scanf("%c",&x);

    if(x>='a'&&x<='z'||x>='A'&&x<='Z')


            printf("\r\n %c is an alphabet\r\n",x);


        else

         printf("\r\n %c is not an alphabet\r\n",x);
    fflush(stdin); fflush(stdout);


}
