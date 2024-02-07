/*
 ============================================================================
 Name        : notes_lec4.c
 Author      : mona
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char text[100]={'m','o','k','a',0};
    printf("%s\r\n",text);

    char text2[100];
    printf("enter your name\n");
    gets(text);




     printf("your name is %s\n",text);

     char a[20]="my sis sara khaled";
     char b[20];
     strcpy (b,a);
     printf("%s\r\n",b);

     char x[20]="sara ";
     char y[20]="khaled";
strcat (x," ");
strcat (x,y);
 printf("%s\r\n",x);


 char c[20]="Moka" ;
char d[20]="Khaled" ;
 strlwr(c);
strupr(d);
printf("%s %s \r\n",c,d);

char names[5][14]={"adham","nora","sara","radwa"};
char name[15];
int i;
printf("enter your name\n");
scanf("%s",name);
  for(i=0;i<5;i++)
    {

    if(stricmp(name,names[i])==0)
    {
        printf("your name is listed\r\n",name);

      break;
    }
}
     if(i==5)
     {
           printf("sorry your name is not listed\r\n");

     }



     char textt[20];
     int v;
     int p;
     int z;
     printf("enter v:\n");
    gets(textt);

    v=atoi(textt);
     printf("enter p:\n");
    gets(textt);

    p=atoi(textt);
     z= v+p ;
     printf("v+p= %d\n",z);


     char t[1000];
     int e;
     for(e=0;e<1000;e++)
     t[e]=rand();
     printf("the random value is\r\n %d",t);

}






