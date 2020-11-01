//deleting the node from a linked list at fandom position

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
      head = tail =  NULL;
    }
    
    void insert(int);
    void display();
    void randdel(int);
};

void ll :: insert(int d){
 
  node *newnode = new node;
  newnode->data = d;
  
  if( head == NULL){
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
    it = it->next;
  }
  cout<<"Tail"<<endl;
}

void ll :: randdel(int count){
  node *it = head;
  node *temp;
  for( int i = 0; i < count-1; i++){
    it = it->next;
  }
  temp = it->next;
  
  it->next = it->next->next;
  delete temp;
}



int main(){
  ll o;
  
  cout<<"How many elements do you want to enter"<<endl;
  int n; 
  cin>>n;
  
  for( int i = 1; i <= n; i++){
    o.insert(i);
  }
  o.display();
  
  cout<<"Enter the position of node to be deleted"<<endl;
  int count;
  cin>>count;
  
  o.randdel(count);
  o.display();
  return 0;
}
