#include<iostream.h>
#include<conio.h>
class arop
{
public:
int a,b;
char i;
void sw();        //Function prototyped
};
void arop::sw()     //Function defined
{
	switch (i)
	{
	   case '+':
	   cout << "Sum is: " << a+b;
	   break;
	   case '-':
	   cout << "Difference is: " << a-b;
	   break;
	   case '*':
	   cout << "Product is: " << a*b;
	   break;
	   case '/':
	   cout << "Quotient is: " << a/b;
	   break;
	   default:
	   cout << "Enter the operator correctly";
	   break;
	}
}
void main()
{
 arop q;
 clrscr();
 cout << "Enter the operand 1: ";
 cin >> q.a;
 cout << "Enter the operator: ";
 cin >> q.i;
 cout << "Enter the operand 2: ";
 cin >> q.b;
 q.sw();
 getch();
}