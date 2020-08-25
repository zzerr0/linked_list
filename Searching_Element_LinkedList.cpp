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
  public :
    Node *head, *tail;
  public :
    ll()
    {
      head = tail = NULL;
    }
    
  void insert(int);
  void display();
  bool search( Node*, int);
};

void ll :: insert( int d )
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
  Node *it = head;
  while( it != NULL )
  {
    cout<<it->data<<"->";
    it = it->next;
  }
  cout<<"->Tail"<<endl;
}

bool ll :: search( Node *head, int x)
{
  Node *it = head;
  
  while( it != NULL)
  {
    if( it->data == x)
      return true;  
    it = it->next;
  }
  return false;
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
    cout<<" \n Enter "<<i+1<<"th element ";
    cin>>el;
    obj.insert(el);
  }
  cout<<"Our linked list is"<<endl;
  cout<<"Head->";
  obj.display();
  if( obj.search( obj.head, 70) == 1)
  cout<<"Element found"<<endl;
  else 
  cout<<"Element not found"<<endl;
  return 0;
}
