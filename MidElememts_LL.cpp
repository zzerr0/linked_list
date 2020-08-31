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
  void mid();
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
void ll :: mid()
{
  Node *it = head;
  int count = -1;
  while( it != NULL)
  {
    //cout<<it->data<<"->";
    it = it->next;
    count++;
  }
  int mid = count/2;
  Node *midel = head;
  for( int i = 0; i < mid; i++ )
  {
    midel = midel->next;
  }
  
  cout<<"Mid element is "<<midel->data;
}

int main()
{
  ll obj;
  cout<<"Head->";
  obj.insert(5);
  obj.insert(6);
  obj.insert(7);
  obj.insert(8); 
  obj.insert(9);
  
 // cout<<"Total count by global variable is "<<count<<endl;
  obj.mid();
 
}
