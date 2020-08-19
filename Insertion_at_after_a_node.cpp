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
  public:
   Node *head, *tail;
  public:
   ll()
  {
    head = tail = NULL;
  }
  
  void insert_beginning(int);
  void display();
  void insert_after(Node*,int);
};
//inserting in the beginning
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

void ll :: insert_after(Node *previous_node, int d)
{
  Node *newnode = new Node();
  newnode->data = d;
  newnode->next = previous_node->next;
  previous_node->next = newnode;
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
  ll();
  cout<<"NULL->";
  obj.insert_beginning(4);
  obj.insert_beginning(5);
  obj.insert_beginning(6);
  obj.insert_beginning(7);
  obj.display();
  
  cout<<"Insertion at random time"<<endl;
  obj.insert_after(obj.head->next,8);
  obj.display();
  cout<<"HEAD"<<endl;
  return 0;
}
