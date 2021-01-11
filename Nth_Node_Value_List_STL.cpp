





#include <iostream> 
#include <list>
using namespace std;

int main()
{
  list <int> mylist = { 1, 2, 3, 4, 5 };
  list <int> :: iterator i;
  i = mylist.begin();
  
  cout<<"Enter the Number of node you want to"
      <<" see "<<endl;
  int n;
  cin>>n;
  advance(i, n-1);
  cout<<"The value at "<<n<<"th node is "<<*i<<endl;
  
}
