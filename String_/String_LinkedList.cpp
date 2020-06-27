// Creating A linked list
#include<iostream>
using namespace std;
class node 
{
  public :
  string data;
  node *next;
};

class LL 
{
  node *head, *tail;
  
  //cinstructor to initialize the value of head and tail
  public :
  LL()
  {
    head = tail = NULL;
  }
  void insert(string);
  void display(); 
};

void LL::insert(string userString)
{
  node *newnode = new node();
  newnode->data = userString;
  
  if(head == NULL)
  {
    head = newnode;
    tail = newnode; 
    newnode = NULL;
  }
  else
  {
    tail->next = newnode;
    tail = newnode;  
  }
}

void LL :: display()
{
  node *iterator;
  iterator = head ;
  while(iterator != NULL)
  {
    cout<<iterator->data;
    cout<<"->";
    iterator = iterator->next;
  }
  cout<<"NULL";
  
  
}
int main()
{
  LL obj;
  cout<<"\nEnter the number of How many elements you want to feed "
  <<endl;
  int n;
  cin>>n;
  
  string userString;
  //replicates the data enter by the user
  for(int i=0; i<n; i++)
  {
    cin>>userString;
    obj.insert(userString);
  }
  
  obj.display();
}
