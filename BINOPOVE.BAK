#include<iostream.h>
#include<conio.h>
class op
{
 int a,b;
 public:
	op()
	{
	 a=0;
	 b=0;
	}
	void getval()
	{
	 cout << "Enter a: \n";
	 cin >>a;
	 cout << "Now Enter b: \n";
	 cin >> b;
	}

	op operator+(op o)
	{
	 op temp;
	 temp.a=a+o.a;
	 temp.b=b+o.b;
	 return (temp);
	}

	op operator*(op o)
	{
	 op temp;
	 temp.a=a*o.a;
	 temp.b=b*o.b;
	 return (temp);
	}
	void out()
	{
	 cout <<"\n The value of a is " << a << "\n The value of b is " << b;
	}
};

void main()
{
 op o1,o2,o3,r;
 clrscr();
 cout << "For o1 ";
 o1.getval();
 cout << "For o2 ";
 o2.getval();
 cout << "For o3 ";
 o3.getval();
 r=o1*o2+o3;
 r.out();
 getch();
}