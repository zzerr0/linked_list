



// Kth smallest absolute difference


#include <iostream>
#include <queue>
#include <vector>
#include <list>
using namespace std;
int main()
{
  
  list <int> mylist = { 1, 4, 2, 3, 4, 5, 7};
  cout<<"The size of linked list is "
      <<mylist.size()<<endl;
  int  mid = mylist.size() / 2;
  list <int> :: iterator i = mylist.begin();
  advance( i, mid );
  cout<<"The mid element is "<<*i<<endl;
  
  return 0;
}
