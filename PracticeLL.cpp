#include<iostream>
using namespace std;

class Node
{
  public:
  Node *next;
  int data;
};

class LL
{
  Node *head, *tail;
  public :
  LL()
  {
    head = tail = NULL;
  }
  
  void insert(int);
  void display();
};

void LL :: insert(int d)
{
  Node *newnode = new Node();
  newnode->data = d;
  if( head == NULL)
  {
    head = tail = newnode;
  }
  else
  tail->next = newnode;
  tail = newnode;
}

void LL :: display()
{
  Node *it = head;
  cout<<"Start-->";
  while( it != NULL)
  {
    cout<<it->data<<"-->";
    it = it->next;
  }
  cout<<"Null"<<endl;
}

int main()
{
  LL obj;
  cout<<"How many elements do you want to enter"<<endl;
  int n, el;
  cin>>n;
  for(int i = 0; i < n; i++)
  {
    cout<<"Enter "<<i<<"th Element"<<endl;
    cin>>el;
    obj.insert(el);
  }
  cout<<"Your Linked List Is"<<endl;
  obj.display();
  return 0;
}
