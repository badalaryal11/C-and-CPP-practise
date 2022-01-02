#include<stdio.h>
#include<conio.h>
void main()
{
int a,b; int m,r,i,l;
printf("To find the moment of inertia of\n Circuiar disk of radius R\t press 1\n Solid cylinder of mass M,length L and radius R\tpress 2\n");
scanf("%d%d",&a,&b);
switch(a)
{
case 1:
printf("\n About the axis perpendicular to the plane at its centre");
scanf("%d%d",&m,&r);
i=1/2*m*r*r;
printf("The moment of inertia(I)=%d",&i);
case 2:
printf("\n About the axis of diameter");
scanf("%d%d",&m,&r);
i=1/4*m*r*r;
printf("The moment of inertia(I)=%d",&i);
case 3:
printf("\n About tangent to a disk");
scanf("%d%d",&m,&r);
i=5/4*m*r*r;
printf("The moment of inertia(I)=%d",&i);
}
switch(b)
{
case 1:
printf("\n About  natural axis");
scanf("%d%d",&m,&r);
i=1/2*m*r*r;
printf("\n The moment of inertia(I)=%d",&i);
case 2:
printf("\n About the perpendicular to its axis at its midpoint");
scanf("%d%d%d",&m,&r,&l);
i=m*(r*r/4+l*l/12);
printf("\n The moment of inertia(I)=%d",&i);
}
getch();
}
