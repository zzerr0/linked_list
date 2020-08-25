#include <iostream>
using namespace std;

class Node
{
  public:
   Node *next;
   int data;
};

class ll
{
  Node *head, *tail;
 public: 
  ll()
  {
    head = tail = NULL;
  }
  
  void insert(int);
  int count();
  void display();
};

void ll :: insert(int d)
{
  Node *newnode = new Node();
  newnode->data = d;
  if( head == NULL )
  {
    head = tail = newnode;
  }
  else
  tail->next = newnode;
  tail = newnode;
}

void ll :: display()
{
  Node *iter = head;
  while( iter != NULL)
  {
    cout<<iter->data<<"->";
    iter = iter->next;
  }
  cout<<"->Tail"<<endl;
}
int ll :: count()
{
 int c = 0;
 Node *it = head;
 
 while( it != NULL) 
 {
   c++;
   it = it->next;
 }
 return c;
}
int main()
{
  ll obj;
  cout<<"Enter the number of elements for LL"<<endl;
  int n;
  cin>>n;
  int el;
  for(int i = 0; i < n; i++)
  {
    cout<<"Enter "<<i+1<<"th element ";
    cin>>el;
    obj.insert(el);
  }
  
  cout<<"Head->";
  obj.display();
  
  cout<<"Number of elements in linked list is "
      <<obj.count()<<endl;
      
  return 0;
}
