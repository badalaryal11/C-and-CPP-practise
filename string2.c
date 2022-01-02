#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[11]; int a;
printf("Enter your name ");
gets(name);
a=strlen(name);
printf("The length of string in your name is %d",a);
strupr(name);
printf("\nYou have entered %s",name);
strlwr(name);
printf("\nYou have entered %s",name);
getch();
}
