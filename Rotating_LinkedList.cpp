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
   ll(){
    head = tail = NULL;
  }
  
  void insert( int );
  void display();
  void rotate( node*, int );
  void call();
};

void ll :: insert( int d ){
  node *newnode = new node();
  newnode->data = d;
  
  if( head == NULL ){
    head = tail = newnode;
  }
  else
  {
    tail->next = newnode;
    tail = newnode;
  }
}

void ll :: display(){
  node *it = head;
  cout<<"Head->";
  while( it!=NULL){
    cout<<it->data<<"->";
    it = it->next;
  }
  cout<<"Tail"<<endl;
  
}

void ll :: rotate( node *hd, int k){
  node *it = head;
  int i = 1;
  while( i < k ){
    it = it->next;
    i++;
  }
  
  tail->next = head;
  head = it->next;
  it->next = NULL;
  
  
}

void ll :: call(){
  rotate(head, 4);
}   
int main(){
  ll obj;
  
  for( int i = 0; i < 8; i++){
    obj.insert(i+1);
  }
  
  obj.display();
  obj.call();
  obj.display();
  return 0;
}
