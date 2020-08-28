//finding the nth node in linked list terrative method

#include <iostream>
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
  
}  
int ll :: find(int n)
{
  Node *current = head;
  int count = 0;  
    while (current != NULL)  
    {  
        if (count == n)  
            return(current->data);  
        count++;  
        current = current->next;  
    }  
  
};

int main()
{
  ll obj;
  obj.insert(5);
  obj.insert(6);
  obj.insert(7);
  obj.insert(8); 
 // cout<<"Total count by global variable is "<<count<<endl;
  
  cout<<" Element at position 2 is "<<obj.find(2);
  cout<<endl;
}
