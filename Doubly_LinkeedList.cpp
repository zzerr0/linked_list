//doubly linked list



#include <iostream>
using namespace std;

class dnode{
  public:
    dnode *pre, *next;
    int data ;
};

class dll{
  dnode *head, *tail;
 public:
  dll(){
    head = tail = NULL;
  }
  
  void insert( dnode* );
  void display();
};

void dll :: insert( dnode *newnode ){
  if( head == NULL ){
    head = tail = newnode;
    head->next = NULL;
    head->pre = NULL;
  }
  
  else{
    newnode->pre = tail;
    tail->next = newnode;
    tail = newnode;
  }
}

void dll :: display(){
  dnode *it = head;
  cout<<"From Head->";
  while( it != NULL ){
    cout<<it->data<<"->";
    it = it->next;
  }
  cout<<"Tail/NULL"<<endl;
  
  //checking the links for previous node
  
  it = tail;
  cout<<"\nFrom Tail->";
  while( it != NULL ){
    cout<<it->data<<"->";
    it = it->pre;
  }
  cout<<"Head/NULL"<<endl;
}

int main()
{
  dll obj;
  cout<<"How many nodes you want to enter"<<endl;
  int n;
  cin>>n;
  int val;
  for( int i = 0; i < n; i++ ){
    cin>>val;
    
    dnode *newnode = new dnode();
    newnode->data = val;
    obj.insert( newnode );
  }
  
  obj.display();

  
  return 0;
  
}
