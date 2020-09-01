//finding the nth node in linked list recursive method

#include <iostream>
#include<cassert>
using namespace std;
//global variable count
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
  void insert(int);
  int find(Node*, int);
  void Count(int);
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
 }
 
void ll :: Count(int key)
{
  Node *it = head;
  int count = 0;
  while( it != NULL)
  {
    //cout<<it->data<<"->";
    if( it->data == key)
    {
      count++;
    }
    it = it->next;
  }
  
  cout<<key<<" count" <<count<<" Times"<<endl;
}

int main()
{
  ll obj;
  obj.insert(5);
  obj.insert(6);
  obj.insert(7);
  obj.insert(5);
  obj.insert(8); 
  obj.insert(9);
  obj.insert(5);
  obj.insert(5);
 // cout<<"Total count by global variable is "<<count<<endl;
  obj.Count(5);
 
}
