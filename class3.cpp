#include<iostream.h>
#include<conio.h>
class test
{
	private:
   int x,y,z;
   public:
   void input();
   void adprocess();
   void subprocess();
   void output();
   };
   void test::input()
   {
   	cout<<"Enter the value of x and y"<<endl;
      cin>>x>>y;
   }
   void test::adprocess()
   {
   	z=x+y;
   }
   void test::subprocess()
   {
   	z=x-y;
   }
   void test::output()
   {
		cout<<"THE RESULT is"<<z<<endl;
   }
   void main()
   {
   	test t;
      t.input();
      t.adprocess();
      t.output();
      t.subprocess();
      t.output();
      getch();
}
