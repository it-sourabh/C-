#include<iostream.h>
#include<conio.h>
class LL
{
public:
int Data;
LL *Link;
LL *pre;
};
LL *Start,*Start2,*Last,*newnode,*inode,*ptr,*ptr2;
int value,ivalue,nvalue,dvalue;
void insert()
{
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
   inode->pre=ptr;
   ptr->Link=inode;
   ptr=inode->Link;
   ptr->pre=newnode;
   inode->Data=nvalue;
}

void del()
{
  cout << "Enter the data of the node that you want to delete: ";
  cin >> dvalue;
  ptr=Start;
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
  ptr=ptr->Link;
  ptr->pre=ptr2;
}

void main()
{
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
     Start->pre=NULL;
   }
   else
   {
     Last->Link=newnode;
     newnode->pre=Last;
     Last=newnode;
   }
   c--;

 }
  Last->Link=NULL;
  cout << "The values of Linked List are: \n";
  while (Start2!=NULL)
  {
   cout << Start2->Data << "\n";
   Start2=Start2->Link;
  }
  getch();
}
