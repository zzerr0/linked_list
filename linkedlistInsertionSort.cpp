#include<iostream>
using namespace std;

class node
{
  public:
  int data;
  node *next;
};

class list
{
  node *head;
  node *tail;
  //Initialzing head and tail with constructor
  //constructor will always be publixlc
  public:
  list()
  {
    head=tail=NULL;
  }
  
  void insert(int);
  void display();
  void ssort();
};
//for inserting elements into the linked list
void list::insert(int d)
{
  node *newnode=new node();
  newnode->data=d;
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
  }
  else 
  tail->next=newnode;
  tail=newnode;
}

//performing selection sort
void list::ssort()
{
 
 node* newnode = new node();
 newnode= head; 
 // Traverse the List 
 while (newnode) 
 { 
   node* min = newnode; 
   node* r = newnode->next; 
// Traverse the unsorted sublist 
    while (r)
    { 
    if(min->data > r->data) 
        min = r;             
        r = r->next; 
    } 
// Swap Data 
   int x = newnode->data; 
   newnode->data = min->data; 
   min->data = x; 
   newnode = newnode->next; 
    } 
 
 }
 
//for displaying the elements of linked list
void list::display()
{
  node *iter= new node();
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
  cout<<"Enter number of elements for linked list "<<endl;
  int n;
  cin>>n;
  //taking input for linked list n times
  for(int i=0;i<n;i++)
  {
    int a=0;
    cin>>a;
    obj.insert(a);
  }
/*  obj.insert(10);
  obj.insert(2);
  obj.insert(8);
  obj.insert(3);
  obj.insert(1);
*/
  cout<<"UNSORTED"<<endl;
  obj.display();
  cout<<"NULL"<<endl;
  obj.ssort();
  cout<<"SORTED"<<endl;
  obj.display();
  cout<<"NULL"<<endl;
  return 0;
}
