#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp; int i;
    char ch;
    struct student
   {
   int age;
   char name[11];
   }s[11];
   fp=fopen("try.c","w");

   printf("\nEnter age and name\n");
   for(i=0;i<11;i++)
   {
   scanf("%d%s",&s[11].age,&s[11].name);
   fprintf(fp,"\n age is %d and name is %s",s[11].age,s[11].name);
   }
   fclose(fp);
   fp=fopen("try.c","r");
   while((ch=fgetc(fp))!=EOF)
   {
   printf("%c",ch);
   }
   fclose(fp);
   getch();
   }