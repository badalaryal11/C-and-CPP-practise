#include<iostream.h>
#include<conio.h>
class test
{
	protected:
   int x,y,z;
   public:
   void check(int x,int y)
   {
   cout<<"Enter x and y"<<endl;
   cin>>x>>y;
   z=x+y;
   cout<<"sum is"<<z<<endl;
   }
   void check(float x,float y)
   {
   float z;
   cout<<"Enter x and y"<<endl;
   cin>>x>>y;
   z=x+y;
   cout<<"sum is"<<z<<endl;
   }
   };
   void main()
   {
   test t;
   int a,b;
   float c,d;
   t.check(a,b);
   t.check(c,d);
   getch();
};