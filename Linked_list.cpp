#include<iostream>
using namespace std; 
class node 
{
  public:
  int data;
  node *next;
  node *pre;
};
class list
{
  node *head;
  node *tail;
  public:
    list()
    {
      head=NULL;
      tail=NULL;
    }
    
    void insert(int);
    void beg(int);
    void del();
    void delend();
    void disbck();
    void search(int);
    void display();
};
//insertion at the end
void list::insert(int d)
{
  node *newnode=new node();
  newnode->data=d;
  
  newnode->next=NULL;
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
    newnode=NULL;
  }
  else 
  { 
    tail->next=newnode;
    newnode->pre=tail;
    tail=newnode;  
  }
  
}

//insertion at the beginning of list 
void list::beg(int d)
{
  node *newnode=new node();
  newnode->data=d;
  newnode->next=head;
  head = newnode;
}

//DELETING A NODE FROM begining 
void list::del()
{
  node *delnode=new node();
  delnode=head;
  head=head->next;
  delete delnode;
}

//DELETING IN THE END 
void list::delend()
{
  
 node *lnode = new node() ;
 node *slnode = new node();
 lnode=head;
 while(lnode->next!=NULL)
 {
   slnode=lnode;
   lnode=lnode->next;
 }
 tail=slnode;
 slnode->next=NULL;
 delete lnode;
  
}


void list::display()
{
  node *iterator;
  iterator=head;
  while(iterator!=NULL)
  {
    cout<<iterator->data<<"-->";
    iterator=iterator->next;
  }
}


void list::disbck()
{
  node *iter;
  iter=tail;
  while(iter!=NULL)
  {
    cout<<iter->data<<"-->";
    iter=iter->pre;
  }
}
void list:: search(int d)
{
  int c=0;
  node *it= new node();
  it=head; 
  while(it!=NULL)
  {
    if(it->data==d)
   {
     
   cout<<it->data<<"is found at"<<c;
  }
  else
  {
    c++;
    it=it->next;
  }
}}

int main()
{ 
  list obj;
  obj.insert(6);
  obj.insert(8);
  obj.insert(9);
  obj.insert(10);
  obj.display();
  cout<<"NULL";
  cout<<endl;
  obj.disbck();
  cout<<"NULL"<<endl;
  
  obj.search(8);
  return 0;
}
