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
    void rduplicate();
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
  while( it != NULL){
     cout<<it->data<<"->";
     it = it->next;
  }
  cout<<"Tail->NULL"<<endl;
}

void ll :: rduplicate(){
 node *it, *temp;
 int var;
 it = head;
 while( it!= NULL ){
   var = it->data;
   
   if( var != it->next->next->data ){
      it = it->next;
   }
   
   else{
     temp = it->next;
     it->next = it->next->next;
     delete temp;
     it = it->next;
   }
 }
}


int main()
{
  ll o;
  
  cout<<"How many nodes you want "<<endl;
  int n;
  cin>>n;
  
  int value;
  for( int i = 0; i < n; i++ ){
    cout<<"Enter "<<i<<"th data";
    cin>>value;
    cout<<endl;
    o.insert(value);
  }
  
  o.display();
  
  o.rduplicate();
  
  o.display();
}
