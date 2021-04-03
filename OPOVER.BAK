#include<iostream.h>
#include<conio.h>
class op
{
 int a,b;
 public:
	void getval()
	{
	 cout << "\n Enter a: ";
	 cin >>a;
	 cout << "\n Enter b: ";
	 cin >>b;
	}
	void operator--()
	{
	 --a;
	 --b;
	}
	void operator++()
	{
	 ++a;
	 ++b;
	}
	void dis()
	{
	 cout << "\n The value of a is " << a;
	 cout << "\n The value of b is " << b;
	}
};

void main()
{
 op o;
 clrscr();
 o.getval();
 --o;
 cout << "After decrement: ";
 o.dis();
 ++o;
 cout << "\n After increment: ";
 o.dis();
 getch();
}
