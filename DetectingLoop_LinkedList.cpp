//finding the nth node in linked list recursive method

#include <iostream>
#include <unordered_set>
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
  void display();
  bool loop();
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
 
void ll :: display()
{
  Node *it = head;
  int count = 0;
  while( it != NULL)
  {
    //cout<<it->data<<"->";
    cout<<it->data<<endl;
    it = it->next;
  }
 
}

bool ll :: loop()
{
  Node *it = head;
  unordered_set<Node*> us;
  
  while( it != NULL)
  {
    if( us.find( it ) != us.end() ) 
    {
      return true;
    }
    
    us.insert( it );
    it = it->next;
  }
  return false;
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
  obj.tail->next = obj.head;
  
  if( obj.loop() )
  {
    cout<<"Loop Detected "<<endl;
  }
  else
  {
    cout<<"No loop found "<<endl;
  }
 // cout<<"Total count by global variable is "<<count<<endl;
//  obj.display();
}
