#include<iostream.h>
#include<conio.h>
class test
{
	protected:
   int x,y,z;
   public:
   void check()
   {
   cout<<"Enter x and y"<<endl;
   cin>>x>>y;
   }
   {
   friend void func(test)
   };
   void func(test t1)
   {
   cout<<"x is"<<t1 x;
   }
   void main()
   {
   test t;
   t.check();
   func(t);
   getch();
}
