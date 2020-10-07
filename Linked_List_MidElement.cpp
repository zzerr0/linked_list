
//program to get the mid of linked list 🔗
#include <iostream>
using namespace std;

// creating a node of linked list
class node {
 public:
  int data;
  node *next;
};

class ll{
 
  node *head, *tail;
  public:
  ll(){
    head = tail = NULL;
  }
  void insert(int);
  int getmid(node*);
  void display();
  void getMid();
};

void ll::insert(int d){
  node *newnode = new node();
  newnode->data = d;
  
  if( head == NULL ){
    head = newnode;
    tail = newnode;
  }
  else{
    tail->next = newnode;
    tail = newnode;
  }
}

void ll::display(){
  node *it = head;
  cout<<"HEAD->";
  while(it != NULL ){
    
    cout<<it->data<<"->";
    it = it->next;
  }
  cout<<"TAIL"<<endl;
}

void ll::getMid(){
  getmid(head);
}

int ll :: getmid( node *it ){
  
 
  int c = 0;
  node *iter = it;
  while( iter != NULL ){
      c++;
    iter = iter->next;
  }
   if( c % 2 == 0){
    cout<<"inside mod"<<endl;
    c = (c/2) + 1;
  }
  else
  c = (c/2) + 1;
  iter = it;
  
  for( int i = 1; i < c; i++){
    iter = iter->next;
  }
  cout<<"Mid element is ";
  cout<<iter->data<<endl;
  return iter->data;
}

int main()
{
  ll obj;
  int el;
  for(int i = 0 ; i < 5; i++)
  {
    cout<<"enter "<<i<<"th element"<<endl;
    cin>>el;
    obj.insert(el);
  }
  
  obj.display();
  obj.getMid();
  
  
  return 0;
}
