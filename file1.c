#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp; int a;
   fp=fopen("try.c","w");
   printf("Enter the value of a");
   scanf("%d",&a);
   fprintf(fp,"\nThe entered value of a is %d",a);
   printf("\n the entered value of a is %d",a);
   fclose(fp);
   getch();
   }
