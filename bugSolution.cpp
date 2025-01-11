#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  //Problematic code
  std::vector<bool> boolVector(1000000);
  std::fill(boolVector.begin(), boolVector.end(), true);
  // ... further operations on boolVector

  //Solution code
  std::vector<char> charVector(1000000);
  std::fill(charVector.begin(), charVector.end(), 1);
  // ... further operations on charVector

  return 0;
}
