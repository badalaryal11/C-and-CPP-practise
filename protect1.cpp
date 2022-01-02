#include<iostream.h>
#include<conio.h>
class test
{
	protected:
   int x,y,z;
   public:
   void check()
   {
   	cout<<"Enter the value of x and y"<<endl;
      cin>>x>>y;
   }
   };
   class rest:public test
   {
   private:
   int k,s;
   public:
   void getk()
   {
   	cout<<"Enter k"<<endl;
      cin>>k;
   }
   void sum()
   {
   	s=x+y+k;
      cout<<"x+y+k is"<<s;
   }
   };
   void main()
   {
   rest r;
   r.check();
   r.getk();
   r.sum();
   getch();
}

