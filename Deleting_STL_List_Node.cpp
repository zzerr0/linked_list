





// deleting element from list

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
  list <int> mylist = { 10, 40, 50, 60, 70 };
  list<int> :: iterator i;
  
  for( i = mylist.begin(); i!= mylist.end(); i++)
  {
    cout<<*i<<" ";
  }
  
  //deleting the desired node
  auto it = mylist.begin();
  advance( it, 3);
  cout<<endl;
  mylist.erase( it );
  for( i = mylist.begin(); i!= mylist.end(); i++)
  {
    cout<<*i<<" ";
  }
  
}
