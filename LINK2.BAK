#include<iostream.h>
#include<conio.h>
class LL
{
public:
int Data;
LL *Link;
};
void main()
{
 LL *Start,*Last,*newnode;
 int value;
 int c;
 char a;
 Start=NULL;
 Last=NULL;
 clrscr();
 cout << "How many nodes do you want to add: ";
 cin >> c;
 while(c!=0)
 {
   newnode = new LL();
   cout << "Enter value: ";
   cin >> value;
   newnode->Data=value;
   if (Start==NULL)
   {
     Start=newnode;
     Last=newnode;
   }
   else
   {
     Last->Link=newnode;
     Last=newnode;
   }
   c--;

 }
  Last->Link=NULL;
  cout << "The Data of start is " << Start->Data << "\n";
  cout << "The Data of last is " << Last->Data;
  getch();
}
