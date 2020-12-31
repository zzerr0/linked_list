


#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
  list <int> mylist;
  int arr[] = { 1, 3, 5, 7, 9 };
  
  //defining the iterators used for linked list
  list <int> :: iterator start, end;
 
  //inserting elements into the linked list
  for( int i = 0; i < 5; i++ ){
    mylist.push_front( arr[i] );
  }
 
  //displaying linked list elements
  for( auto i = mylist.begin(); i != mylist.end(); i++){
    cout<<*i<<" ";
  }
  
  //declaring the range to be deleted
  start = end = mylist.begin();
 //advance( start, 1);
  advance( end, 5);
  mylist.erase(start, end );
  cout<<endl;
  
  if( mylist.empty()){
    cout<<"The linked list is empty "<<endl;
  }
  else{
    cout<<"Linked List is not empty "<<endl;
  }
  
  
}
