#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp; int a; char ch;
   fp=fopen("cat.c","r");
   printf("Enter the value of a");
   scanf("%d",&a);
   fprintf(fp,"\nThe entered value of a is %d",a);
   printf("\n the entered value of a is %d",a);
   fclose(fp);
   fp=fopen("cat.c","r");
   while((ch =getc(fp))!=EOF)
   {
   printf("%c",ch);
   }
   fclose(fp);
   getch();
   }
