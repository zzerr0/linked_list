//Program to find sum of all elements in arrauy

#include<iostream>
using namespace std;

class node
{
  public :
    int data;
    node *next;
};

class ll
{
  
  node *head, *tail;
  public:
    ll()
    {
     head = tail = NULL;
    }
    
    void insert(int);
    void display();
};

void ll::insert(int value)
{
  node *newnode = new node();
  newnode->data = value;
  newnode->next = NULL;
  if(head == NULL)
  {
    head = newnode;
    tail = newnode;
  }
  else
  {
  tail->next = newnode;
  tail = newnode;
  }
}

void ll::display()
{
  int sum = 0;
  node *iter ;
  iter = head;
  while(iter != NULL)
  {
    sum = sum + iter->data;
    iter = iter->next;
  }
  cout<<"SUM is "<<sum<<endl;
}

int main()
{
  ll obj;
  
  cout<<"How many numbers you want to enter?"<<endl;
  int clas;
  cin>>clas;
  int value;
  for(int i=0; i<clas; i++)
  {
    cin>>value;
    obj.insert(value);
  }
  
  obj.display();
}

