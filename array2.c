#include<stdio.h>
#include<conio.h>
void main()
{
int marks[5],sum=0;
int i; 
for(i=0;i<5;i++)
{
printf("\nEnter the marks:\t");
scanf("%d",&marks[i]);
sum =sum + marks[i];
printf("\nThe Grand total is %d",sum);
}
getch();
}
