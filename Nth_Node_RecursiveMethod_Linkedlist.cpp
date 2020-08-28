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
int ll :: find(Node *hd, int index)  
{  
      
    Node *current = hd;  
      
    // the index of the  
    // node we're currently  
    // looking at  
    int count = 0;  
    while (current != NULL)  
    {  
        if (count == index)  
            return(current->data);  
        count++;  
        current = current->next;  
    }  
  
    /* if we get to this line,  
    the caller was asking  
    for a non-existent element  
    so we assert fail */
    assert(0);        
}  

int main()
{
  ll obj;
  obj.insert(5);
  obj.insert(6);
  obj.insert(7);
  obj.insert(8); 
 // cout<<"Total count by global variable is "<<count<<endl;
  
  cout<<"Element at position 2 is "<<obj.find(obj.head,2);
  cout<<endl;
}
