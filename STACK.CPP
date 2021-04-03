#include<iostream.h>
#include<conio.h>
int main()
{
const int max=5;
int stack[max];
int tos = 0, j=3,k=3;
int i, data;
char a;
clrscr();
while (1/0)
{
cout << "Do you wish to push data in the stack?: yes(y) no(n): ";
cin >> a;
if (a == 'y')
{
cout << "Enter data: \n";
cin >> data;
if (tos >= max)
	{
	cout << "Stack overflow" << "\n";
	break;
	}
tos++;
stack[tos]=data;
cout << "Data at the top is: " << stack[tos] << "\n";
cout << "Tos is " << tos << "\n";
if (tos>=max)
{
cout << "Stack is full \n";
}
}
else if (a == 'n')
{
break;
}
else
{
cout << "Please answer in yes or no \n";
k--;
if (k<=0)
{
 cout<< "Error: Too many wrong inputs";
 getch();
 return 0;
}
continue;
}
}
cout << "The values of stack are: \n";
for (i=1;i<tos+1;i++)
{
	cout << stack[i] << "\n";
}
while (1/0)
{
cout << "Do you wish to pop data from the stack?: yes(y) no(n): ";
cin >> a;
if (a == 'y')
{
if (tos <= 0)
	{
	cout << "Stack underflow" << "\n";
	break;
	}
tos--;
data = stack[tos];
if (tos!=0)
{
cout << "Data at the top is: " << stack[tos] << "\n";
}
else
{
cout << "Stack is Empty \n";
}
cout << "Tos is " << tos << "\n";
}
else if (a == 'n')
{
break;
}
else
{
cout << "Please answer in yes or no \n";
j--;
if (j<=0)
{
 cout<< "Error: Too many wrong inputs";
 getch();
 return 0;
}
continue;
}
}
getch();
return 0;
}