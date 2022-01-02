#include<stdio.h>
#include<conio.h>
void main()
{

	struct student
   {
   	char name[11];
      int age;
      float mark;
   }s={"Badal",19,78};
   {
   printf("\n name is %s\n age is %d\n mark is %.2f",s.name,s.age,s.mark);
   }
   getch();
   }


