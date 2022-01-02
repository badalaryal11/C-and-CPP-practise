#include<iostream.h>
#include<conio.h>
class test
{
	private:
   int x,y,z;
   public:
   void input()
   {
   cout<<"Enter the value of x and y"<<endl;
   cin>>x>>y;
   }
   void process()
   {
   	z=x+y;
   }
   void output()
   {
   	cout<<"The sum is"<<z;
   }
   };
   void main()
   {
   test t;
   t.input();
   t.process();
   t.output();
   getch();
   }


