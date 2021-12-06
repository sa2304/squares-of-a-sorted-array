#include <cassert>
#include <iostream>

#include "solution.h"

using namespace std;

void TestSortedSquares() {
  Solution s;
  {
    vector<int> numbers{-4, -1, 0, 3, 10};
    assert((vector{0, 1, 9, 16, 100}) == s.sortedSquares(numbers));
  }
  {
    vector<int> numbers{-7, -3, 2, 3, 11};
    assert((vector{4, 9, 9, 49, 121}) == s.sortedSquares(numbers));
  }
}

int main() {
  std::cout << "Ok!" << std::endl;
  return 0;
}
