//finding a number in linked list

#include <iostream>
using namespace std;
//global variable count
int count = 0;
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
  int find(int);
};

void ll :: insert(int d)
{
  Node *newnode = new Node();
  newnode->data = d;
  if( head == NULL)
  {
    head = tail = newnode;
  }
  else
  {
    tail->next = newnode;
    tail = newnode;
  }
  count++;
}
int ll :: find(int x)
{
  Node *it = head;
  int ct = 0;
  while( it != NULL)
  {
   ct++;
   if( it->data == x)
   {
    return ct;
   }
   it = it->next; 
  }
  return -1;  
};

int main()
{
  ll obj;
  obj.insert(5);
  obj.insert(6);
  obj.insert(7);
  obj.insert(8); 
  cout<<"Total count by global variable is "<<count<<endl;
  
  cout<<"Found at position "<<obj.find(5);
  cout<<endl;
}
