#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char pass1[11]="basu",pass[11];  int a;
printf("Enter ur password\n");
gets(pass);
a = strcmp(pass1,pass);
if(a==0)
{
printf("\nYeh hai aasqui");
}
else
{
printf("\nYeh hai baadmashi:)");
printf("\n a is %d and password mismatch",a);
}
strcat(pass1,pass);
printf("\n pass1 is %s",pass1);
printf("\n pass is %s",pass);
getch();
}
