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
 LL *Start,*Start2,*Last,*newnode,*inode,*ptr,*ptr2;
 int value,ivalue,nvalue,dvalue;
 char a;
 int c;
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
  Start2=Start;
  cout << "The values of Linked List are: \n";
  while (Start2!=NULL)
  {
   cout << Start2->Data << "\n";
   Start2=Start2->Link;
  }
  cout << "Enter value to insert after: ";
  cin >> ivalue;
  cout << "Enter new value: ";
  cin >> nvalue;
  ptr=Start;
  inode = new LL();
  while(ptr!=NULL)
  {
   if (ptr->Data==ivalue)
   {
    break;
   }
   else
   {
    ptr=ptr->Link;
   }
  }
  inode->Link=ptr->Link;
  ptr->Link=inode;
  inode->Data=nvalue;
  cout << "The values of Linked List are: \n";
  Start2=Start;
  while (Start2!=NULL)
  {
   cout << Start2->Data << "\n";
   Start2=Start2->Link;
  }
  cout << "Enter the data of the node that you want to delete: ";
  cin >> dvalue;
  ptr=Start;
  ptr2=Start;
  while (ptr!=NULL)
  {
   if (ptr->Data==dvalue)
   {
    break;
   }
   else
   {
    ptr2=ptr;
    ptr=ptr->Link;
   }
  }
  ptr2->Link=ptr->Link;
  Start2=Start;
  cout << "The values of the Linked List are: \n";
  while (Start2!=NULL)
  {
   cout << Start2->Data << "\n";
   Start2=Start2->Link;
  }
  delete ptr;
  getch();
}
