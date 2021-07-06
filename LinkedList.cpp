#include <iostream>
using namespace std;
class node{
 public:
  int data;
  node *next;
};

class LinkedList{
 node *head, *tail;
 public :
  LinkedList(){
   head = NULL;
   tail = NULL;
  }
  
  void insert( int );
  void display();

};

void LinkedList :: insert( int d ){
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

void LinkedList :: display( ){
 node *it = NULL;
 it = head;
 while( it != NULL ){
  cout<<it->data<<"->";
  it = it->next;
 }
}
int main(){
 LinkedList obj;
 cout<<"How many elements you want to insert in Linked List "<<endl;
 int n;
 cin>>n;
 int el = 0;
 for( int i = 0; i < n; i++ ){
  cin>>el;
  obj.insert( el );  
 }
 
 obj.display();
 cout<<"NULL"<<endl;
return 0;
}
