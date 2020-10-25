#include <iostream>
using namespace std;

class node{
  public:
    node *next;
    int data;
};

class ll{
  private:
    node  *tail;
  public: 
    node *head;
  ll(){
    head = tail = NULL;
  }
  void insert(int);
  void display();
  bool loop();
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

bool ll :: loop(){
  node *slow = head;
  node *fast = head;
  
  while(true){
    //work for slow
    slow = slow->next;
    //work for fast
    
    if( fast->next != NULL){
      fast = fast->next->next;
    }
    else{
      return false;
    }
    
    if(slow == NULL || fast == NULL ) // if either hits null..no loop
            return false;
    
    if( slow == fast ){
      return true;
    }
  }
}



void ll :: display(){
  node *it = head;
  
  cout<<"Head->";
  while( it != NULL){
    cout<<it->data<<"->";
    it = it->next;
  }
  cout<<"Tail"<<endl;

int main(){
  ll obj;
  obj.insert(7);
  obj.insert(8);
  obj.insert(9);
  obj.display();
  bool w = obj.loop();
  if( w == true ){
    cout<<"loop found"<<endl;
  }
  else
  cout<<"No Loop"<<endl;
  
  return 0;
}
