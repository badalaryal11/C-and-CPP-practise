#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *FP,*FQ; char ch;
   FP=fopen("try.c","r");
   FQ=fopen("try1.c","a");
   while((ch=fgetc(FP))!=EOF)
   {
   fputc(ch,FQ);
   }
   fclose(FP);
   fclose(FQ);
   getch();
   }