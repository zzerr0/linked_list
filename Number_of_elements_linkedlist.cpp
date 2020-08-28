//counting the number of elements in linked list

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
  void cnt();
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
void ll :: cnt()
{
  Node *it = head;
  int ct = 0;
  while( it != NULL)
  {
    ct++;
    it = it->next;
  }
  
 cout<<"Total count by iterator variable is "<<ct<<endl;
}
int main()
{
  ll obj;
  obj.insert(5);
  obj.insert(6);
  obj.insert(7);
  obj.insert(8); 
  cout<<"Total count by global variable is "<<count<<endl;
  
  obj.cnt();
  cout<<endl;
}
