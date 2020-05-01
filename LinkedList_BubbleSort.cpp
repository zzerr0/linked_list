
//sorting linked list 
//we'll use bubble sort algorithm for sorting
#include<iostream>
using namespace std;
class node 
{
  public:
  node *next;
  int data;
};

class list
{ 
  node *head;
  node *tail;
  public:
  list()
  {
    head=NULL;
    tail=NULL;
  }
  void insert(int);
  void display();
  void bubble_sort();
};
//for inserting data in linked list
void list::insert(int d)
{
  node *newnode=new node();
  newnode->data = d;
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
  }
  else 
  tail->next=newnode;
  tail=newnode; 
}
/*
  BUBBLE SORR ALGORITHM
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp;
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }  
*/
void list::bubble_sort()
{ 
  node *i, *j;
  int t; 
//temporary variable for swapping linked list data
  
  for(i = head ;i->next!=NULL;i=i->next)
   {
     for(j=head;j->next!=NULL;j=j->next)
     {
       if(j->data>j->next->data)
       {
         t=j->data;
         j->data=j->next->data;
         j->next->data=t;
       }
     }
   }
  
}

//traversing and displaying data of linked list
void list::display()
{
  node *iter = new node();
  iter=head;
  while(iter!=NULL)
  {
    cout<<iter->data<<"->";
    iter=iter->next;
  }
}


int main()
{
  list obj;
  obj.insert(5);
  obj.insert(10);
  obj.insert(6);
  obj.insert(1);
  
  //before sorting 
  obj.display();
  cout<<"NULL"<<endl;
  
  //performing sorting
  obj.bubble_sort();
  
  //after sorting
  obj.display();
  cout<<"NULL"<<endl;
  return 0;
}
