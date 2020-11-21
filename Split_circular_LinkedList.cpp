#include <iostream>
using namespace std;

class node{
  public:
    node *next;
    int data;
};

class ll{
  node *head, *tail;
  int count;
  public:
  ll(){
    head = tail = NULL;
    count = 0;
  }
  void split( int );
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
    count++;
  }while( it  != head );
  cout<<"Tail"<<endl;
  
  cout<<"Count is "<<count<<endl;
  //calling the split function
  
  split( count );
}

void ll :: split( int c ){
  node *it = head;
  
  for( int i = 0; i <= c/2; i++ ){
    it = it -> next;
  }
  
  node *temp = it->next;
  node *head2;
  it->next = head;
  
   for( int i = 0; i <= c; i++ ){
    temp = temp -> next;
    if( temp->next == head ){
      temp->next = head2;
    }
  }
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
