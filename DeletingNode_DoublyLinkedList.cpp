


//Deleting a node in doubly linkeedList 

#include <iostream>
using namespace std;

class node
{
  public:
    node *next, *prev;
    int data;
    
    node(){
      next = prev = NULL;
    }
};

class dll{
  node *head, *tail;
  
  public:
    dll(){
      head = tail = NULL;
    }
    
  void insert( node* );
  void display();
  void Delete( int );
};

void dll :: insert( node *newnode ){
  if( head == NULL ){
    head = tail = newnode;
    cout<<"Value inserted in Head node "<<endl;
  }
  
  else{
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    cout<<"Value inserted in Preceding nodes "<<endl;
  }
  
}

void dll :: display(){
  node *it = head;
  
  cout<<"Head->";
  while( it != NULL ){
    cout<<it->data<<"->";
    it = it->next;
  }
  cout<<"Tail/NULL"<<endl;
  
}

void dll :: Delete( int d ){
 
  node *it = head;
  while( it->data != d ){
    it = it->next;    
  }
  if( it->prev == NULL ){
    head = it->next;
    delete (it);
  }
  if( it->next == NULL ){
    tail = it->prev;
    tail->next = it->next;
    delete (it);
  }
  else
  {
   it->next->prev = it->prev;
   it->prev->next = it->next;
   delete (it);
  }
  cout<<" value deleted "<<endl;
}




int main()
{
  dll obj;
  cout<<"How many nodes you want to create "<<endl;
  int n;
  cin>>n;
  int val;
  for( int i = 0; i < n; i++ ){
    cout<<"Enter "<<i<<"th node value "<<endl;
    cin>>val;
    node *newnode = new node();
    newnode->data = val;
    obj.insert( newnode );
  }
  
  
  obj.display();
  
  cout<<" Enter the value to be deleted "<<endl;
  int value;
  cin>>value;
  
  obj.Delete( value );
  
  obj.display();
  return 0;
}
