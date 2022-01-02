#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c; int m,r,l,i;
printf("To find the moment of inertia of\n Circuiar disk of radius R\t press 1\n Solid cylinder of mass M,length L and radius R\tpress 2\n");
switch (a)
{
case 1:
printf("moment of inertia of circular disk of radius R");
printf("\nTo find:\n(a)Perpendicular to the plane at its centre\t press 1\n(b)About a diameter\t press 2\n(c)About a tangent to a disk\t press 3");

switch (b)
{
case 1:
printf("\n Enter the value of M and R respectively:\t");
scanf("%d%d",&m,&r);
i=1/2*m*r*r;
printf("\n I=%d",&i);
break;
case 2:
printf("\n Enter the value of M and R:\t");
scanf("%d%d",&m,&r);
i=1/4*m*r*r;
printf("\n I=%d",&i);
break;
case 3:
printf("\n Enter the value of M and R:\t");
scanf("%d%d",&m,&r);
i=5/4*m*r*r;
printf("\n I=%d",&i);
}
case 2:
printf("\n Moment of inertia of Solid cylinder of mass M length L and radius R");
printf("\nTo find:\n(a) About natural axis\t press 1\n(b)perpenducular to its axis\t press 2");
switch(c)
{
case 1:
printf("\nEnter the value of M and R:\t");
scanf("%d%d",&m,&r);
i=1/2*m*r*r;
printf("\n I=%d",&i);
break;
case 2:
printf("\nEnter the value of M and R:\t");
scanf("%d%d",&m,&r);
i=m*(r*r/4+l*l/12);
printf("\n I=%d",&i);
}
}
getch();
}








