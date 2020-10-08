#include <iostream>
using namespace std;
class node{
  public:
    int data;
    node *next;
};

class ll{
  
  node *head, *tail;
  public:
  ll()
  {
    head = tail = NULL;
  }
  
  void insert(int);
  void display();
  void reverse();
};

void ll :: insert( int d ){
  node *newnode = new node();
  newnode->data = d;
 
  if( head == NULL ){
    head = tail = newnode;
  }
  else
  tail->next = newnode;
  tail = newnode;
}

void ll :: display(){
  node *it;
  it = head;
  cout<<"HEAD->";
  while( it != NULL ){
    cout<<it->data<<"->";
    it = it->next;
  }
  cout<<"NULL"<<endl;
}
void ll :: reverse(){
  node *curr, *prev, *nxt;
  curr = head;
  prev = NULL;
  
  while( curr != NULL ){
    nxt = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nxt;   
  }
  
  head = prev; 
}
int main()
{
  ll obj;
  int el;
  
  for(int i = 0; i<5; i++ ){
    cout<<"Enter "<<i+1<<" element"<<endl;
    cin>>el;
    obj.insert(el);
  }
  cout<<" Non-reversed linked list "<<endl;
  obj.display();
  obj.reverse();
  cout<<" Reversed Linked List "<<endl;
  obj.display();
  
  return 0;
}

