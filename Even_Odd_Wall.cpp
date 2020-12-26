




//implementing linked list with STL

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
  
  list <int> stlist;
  for( int i = 0; i < 11; i++ ){
    if( i%2 == 0 ){
      stlist.push_front(i);
    }
    else{
      stlist.push_back(i);
    }
  }
  
  list<int> :: iterator it;
  
  for( it = stlist.begin(); it!= stlist.end(); it++){
    cout<<*it<<" ";
  }
  
  return 0;

}
