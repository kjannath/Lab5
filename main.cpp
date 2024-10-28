#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "SortedAList.h"

using namespace std;

int main()
{
  ds::SortedAList<int> L;
  L.put(3);
  L.put(2);
  L.put(4);
  L.put(0);
  L.put(1);

  for (int i=0; i < L.size(); i++)
    cout <<i<<"-th element == "<<L.get(i)<<endl;

  L.remove(3);
  cout <<"3-th element is now == "<<L.get(3)<<endl;

  // TODO: Add more tests / test find function
}
