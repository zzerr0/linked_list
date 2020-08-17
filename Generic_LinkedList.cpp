#include<iostream>
using namespace std;

template< typename T >
class Node
{
  public:
  T data;
  Node *next;
};

template< typename T>
class ll
{
  private :
    Node<T> *head ;
    Node<T> *tail;
    public :
      //defining constructor
      ll()
      {
        head = tail = NULL;
      }
      
      void append(T d);
      void display();
};

template< typename T >
void ll<T>::append(T d)
{
  Node<T> *newnode = new Node<T>;
  newnode->data = d;
  if( head == NULL)
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

template< typename T >
void ll<T> :: display()
{
  Node<T> *iterator = head;
  cout<<"Head->";
  while( iterator != NULL )
  {
    cout<<iterator->data<<"->";
    iterator = iterator->next;
  }
  cout<<"NULL"<<endl;
}

int main()
{
  ll<int> objint;
  
  objint.append(4);
  objint.append(5);
  objint.append(6);
  objint.display();
  
  
  ll<char> objchar;
  
  objchar.append('A');
  objchar.append('B');
  objchar.append('C');
  objchar.display();
  return 0;
}
