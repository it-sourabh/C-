#include<iostream.h>
#include<conio.h>
class base
{
public:
	void print()
	{
	cout << "Test function \n";
	}
};
class derived1 : public base
{
public:
	void add(int a, int b)
	{
	cout << a+b << "\n";
	}
};
class derived2 : public derived1
{
public:
	void sub(int x, int y)
	{
	cout << x-y << "\n";
	}
};
void main()
{
derived1 obj;
derived2 obj2;
clrscr();
obj2.print();
obj.print();
getch();
}