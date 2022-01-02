#include<stdio.h>
#include<conio.h>
void main()
{
	int i=3;
	int*j,**k;
	j=&i;k=&j;
	printf("\n i ko value is %d",i);//i ko value sh«ow gareko
	printf("\n *j ko value is %d",*j);//j=«&i cha so *j use garda * and & cancel out re so i ko value aucha
	printf("\n **k ko value is %d",**k);//k=&j and j=&i cha so eventually i ko value access huncha
	printf("\n  adress of i is %d",&i);                                                          -
	printf("\n j ko adress is %d",&j);
	printf("\n j ko value is %d",&i);
	printf("\n j ko adress is %d",k);
	getch();
}

