#include<iostream.h>
#include<conio.h>
class test
{
	private:
   int x,y,z;
   public:
   test()
   {
   	x=10;
      y=20;
   cout<<"CONSTRUCTOR ACTIVE"<<endl;
   }
   ~test()
   {
   	x=10;
      y=20;
   cout<<"DECONSTRUCTOR ACTIVE";
   }
   void input()
   {
   	cout<<"ENTER THE VALUE OF X AND Y"<<endl;
      cin>>x>>y;
   }
   void process()
   {
   	z=x+y;
   }
   void output()
   {
   	cout<<"THE SUM IS"<<z<<endl;
   }
   };
   void main()
   {
   	cout<<"IN THE MAIN BLOCK"<<endl;
   test t;
   t.process();
   t.output();
   getch();
   }   

