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
  
  void insertend(int);
  void insertbeg(int);
  void insertran(int, int);
  void display();
};

//insertion before the previous node
void LL :: insertbeg(int d)
{
  Node *newnode = new Node();
  newnode->data = d;
// 
  if( head == NULL)
  {  
    newnode->next = NULL;
    head = tail = newnode;
  }
  else
  newnode->next = head;
  head = newnode;

}

//insertion after the previous node
void LL :: insertend(int d)
{
  Node *newnode = new Node();
 ;
  newnode->data = d;
  newnode->next = NULL;
  if( head == NULL)
  {
    head = tail = newnode;
  }
  else
  tail->next = newnode;
  tail = newnode;
}
/*/to insert at random position 
void LL :: insertran(int d, int n)
{
  Node *tolink = NULL;
  Node *iter = head;
  for(int i = 1; i <= n; i++)
  {
    iter = iter->next;
  }
  
  tolink = iter->next;
  
  //inserting the new node
  Node *newnode = new Node();
  newnode->data = d;
  iter->next = newnode;
  newnode->next = tolink;
  
}

*/
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
    obj.insertbeg(el);
  }
  int pos;
  cout<<" Enter data and position where you want to enter "<<endl;
  cin>>el>>pos;
  obj.insertran(el, pos);

  obj.display();
  return 0;
}
