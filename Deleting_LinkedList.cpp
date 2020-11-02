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
  
  void insert(int);
  void display();
  void del();
};

void ll :: insert( int d ){
  node *newnode = new node();
  newnode->data = d;
  
  if( head == NULL){
    head = tail = newnode;
  }
  
  else{
    tail->next = newnode;
    tail = newnode;
  }
}

void ll ::display(){
  
  node *it = head;
  cout<<"HEAD->";
  while( it!=NULL){
    cout<<it->data<<"->";
    it = it->next;
  }
  cout<<"Tail"<<endl;
  
}

void ll :: del(){
  node *it, *tmp;
   it = head;
  
  while( it!= NULL ){
   
   it = head;
   tmp = it;
   it = it->next;
   delete tmp;
  }
  
  head = NULL;
  delete head;
  cout<<"Linked list deleted "<<endl;
}

int main()
{
  ll o;
  cout<<"How many elements do you want to enter"<<endl;
  int n;
  cin>>n;
  
  for( int i = 0; i < n; i++){
    o.insert(i);
  }
  
  o.display();
  o.del();
  o.display();
}
