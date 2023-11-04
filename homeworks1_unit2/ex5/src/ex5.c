/*
 ============================================================================
 Name        : ex5.c
 Author      : mona
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &c);


    printf("ASCII value of %c = %d", c, c);
    fflush(stdin); fflush(stdout);

}
