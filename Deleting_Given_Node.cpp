#include<iostream>
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
  //constructor to initialize data members
  ll()
  {
    head = tail = NULL;
  }
  
  void insert(int);
  void display();
  void Delete(Node*);
};

void ll :: insert(int d)
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
    tail -> next = newnode;
    tail = newnode;
  }
  
}
//deleting after a particular node
void ll :: Delete(Node *before)
{
  Node *temp;
  temp = before->next;
  before->next = temp->next;
  //releasing the memory hold by the deleted node
  delete temp;
  
  
}
void ll :: display()
{
  Node *iter = head;
  while( iter != NULL)
 {
   cout<<iter->data<<"->";
   iter = iter->next;
 }
 cout<<"NULL";
}

int main()
{
  ll obj;
  cout<<"HEAD->";
  obj.insert(4);
  obj.insert(5);
  obj.insert(6);
  obj.insert(7);  
  obj.Delete(obj.head);
  obj.display();
}
