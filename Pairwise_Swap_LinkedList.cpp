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
    
    void insert( int);
    void swap();
    void display();
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

void ll :: display(){
  node *it = head;
  cout<<"Head->";
  while( it != NULL ){
    cout<<it->data<<"->";
    it = it->next;
  }
  cout<<"Tail"<<endl;
}

void ll :: swap(){
  int temp;
  node *it = head;
  
  while( it != NULL && it->next != NULL ){
     
      temp = it->data;
      it->data = it->next->data;
      it->next->data = temp;
   
    it = it->next->next;
  }
}

int main(){
  ll o;
  
  for( int i = 1; i <= 6; i++){
    o.insert(i);
  }
  cout<<"Before Pair Wise Swap "<<endl;
  o.display();
  
  o.swap();
  
  cout<<"\nAfter Pairwise Swap "<<endl;
  o.display();
}
