



#include <iostream>
using namespace std;

//creating a node structure

class node{
  public:
    node *next;
    int data;
};

//creating a linked list class
class ll{
  node *head, *tail;
  
  public:
    ll(){
      head = tail = NULL ;
    }
    
    void insert( int );
    void display();
    void sortinsert( node* );
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
  while( it != NULL ){
    cout<<it->data<<"->";
    it = it->next;
  }
  cout<<"Tail/NULL"<<endl;
}

void ll :: sortinsert( node *new_node ){
  node *it, *pre;
  
  it = head;
  
  while( it -> data < new_node->data ){
    pre = it;
    it = it->next;
  }
  
  pre->next = new_node;
  new_node->next = it;
}

int main(){
  
  ll obj;
  cout<<"How many items yout want to put ";
  int n, val;
  cin>>n;
  
  cout<<"\nInsert the value in sported manner "<<endl;
  
  for( int i = 0; i < n; i++ ){
    cout<<"Enter the "<<i<<"th value ";
    cin>>val;
    obj.insert( val );
    cout<<endl;
  }
  
  obj.display();
  
  cout<<" Enter a new value ";
  cin>>val;
  
  node *new_node = new node();
  new_node->data = val;
  
  obj.sortinsert( new_node );
  
  obj.display();
  return 0; 
  
}
