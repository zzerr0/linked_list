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
  private:
   Node *head, *tail;
  public:
   ll()
  {
    head = tail = NULL;
  }
  
  void insert_beginning(int);
  void display();
};

void ll :: insert_beginning(int d)
{
  Node *newnode = new Node();
  newnode->data = d;
  if( head == NULL)
  {
    head = newnode;
    tail = newnode;
  }
  else
  {
   newnode->next = head;
   head = newnode;
  }
}

void ll :: display()
{
  Node *iter = head;
  while( iter != NULL )
  {
    cout<<iter->data<<"->";
    iter = iter->next;
  }
}

int main()
{
  ll obj;
  cout<<"NULL->";
  obj.insert_beginning(4);
  obj.insert_beginning(5);
  obj.display();
  cout<<"HEAD"<<endl;
  return 0;
}
