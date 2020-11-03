#include <iostream>
#include <stack>
using namespace std;

class node{
  public:
    node *next;
    int data;
};

class ll{
  node *head, *tail;
  stack <int> mystack;
  public:
    ll(){
      head = tail = NULL;
    }
    
    void insert(int);
    void display();
    int check();
};

void ll :: insert( int d ){
  node *newnode = new node();
  newnode->data = d;
  
  if( head == NULL ){
    head = tail = newnode;
  }
  
  else{
    tail->next = newnode;
    tail = newnode;
  }
    
}

void ll :: display(){
  node *it = head;
  
  cout<<"Head->";
  while( it!=NULL){
    cout<<it->data<<"->";
    mystack.push(it->data);
    it = it->next;
  }
  cout<<"Tail"<<endl;
}

int ll :: check(){
  
  node *it = head;
  while( it!=NULL){
    
   if( it->data != mystack.top())
    {
      return false;
    }
    mystack.pop();
 
    it = it->next;
  }
}

int main()
{
  ll o;
  int el;

  cout<<"Enter Elements"<<endl;
  for( int i = 0; i < 6; i++){
    cin>>el;
    o.insert(el);
  }
  
  o.display();
  bool decide = true;
  decide = o.check();
  
  if( decide == false ){
    cout<<"Not palindrome "<<endl;
  }
  else{
    cout<<"Linked list is palindrome "<<endl;
  }
  return 0;
  
}
