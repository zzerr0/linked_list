

//node in main function





#include <iostream>
using namespace std;

class Lnode{
  public:
    Lnode *next;
    int data;
};

class ll{
  Lnode *head, *tail;
  
  public:
    ll(){
      head = tail = NULL;
    }
    
    void insert( Lnode *);
    void display();
    
 };
 
void ll :: insert( Lnode *newnode ) {
  if( head == NULL ){
    head = tail = newnode;
  }
  
  else{
    tail->next = newnode;
    tail = newnode;
  }
}
 
void ll :: display(){
  
  Lnode *it = head;
  cout<<"Head->";
  while( it  != NULL ){
    cout<<it->data<<"->";
    it = it->next;
  }
  cout<<"Tail/NULL"<<endl;
}

 int main(){
   ll obj;
   
   cout<<"How many elements you wan to enter"<<endl;
   int n;
   cin>>n;
   int val;
   
   for( int i = 0; i < n; i++ ){
     cout<<"Enter"<<endl;
     cin>>val;
     Lnode *newnode = new Lnode();
     newnode->data = val;
     obj.insert( newnode );
     
   }
   
   obj.display();
   
   return 0;
 }
