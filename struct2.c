#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
   struct student
   {
   char name[110];
   int age;
   float mark;
   }s[110];

   for(i=0;i<5;i++)
   {
   	printf("\nEnter ur name,age,mark\n");
      scanf("%s%d%f",&s[i].name,&s[i].age,&s[i].mark);
   }
   for(i=0;i<5;i++)
   {
   	printf("\n u enter name %s,age %d,mark %.2f",s[i].name,s[i].age,s[i].mark);
   }
   getch();
   }
