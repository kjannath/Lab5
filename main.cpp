#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "SortedAList.h"
#include "doctest.h"

TEST_CASE("SortedAList") {
  ds::SortedAList<int> L;
  L.put(3);
  L.put(2);
  L.put(4);
  L.put(5);
  L.put(1);

  std::stringstream ss;
  ss << L;
  REQUIRE(ss.str() == "[1,2,3,4,5]");

  // Todo: Test `remove(i)`
}
