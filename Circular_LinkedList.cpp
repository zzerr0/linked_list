#include <iostream>
using namespace std;

class node{
  public:
    node *next;
    int data;
};

class ll{
  node *head, *tail;
  public:
  ll(){
    head = tail = NULL;
  }
  
  void insert( int );
  void display();
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
  
  tail->next = head;
}

void ll :: display(){
  node *it;
  it = head;
  cout<<"Head->";
  do{
    cout<<it->data<<"->";
    it = it->next;
  }while( it  != head );
  cout<<"Tail";
}

int main(){
  ll obj;
  
  cout<<"How many elements do you want to enter"<<endl;
  int n, val;
  cin>>n;
  for( int i = 0; i < n; i++ ){
    cin>>val;
    obj.insert(val);
  }
  
  obj.display();
}
