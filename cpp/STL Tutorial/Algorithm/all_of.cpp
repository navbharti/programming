// all_of example
#include <iostream>     // std::cout
#include <algorithm>    // std::all_of
#include <array>        // std::array
using namespace std;
bool is_odd(int a){
    return a%2;
}
int main () {
  array<int,8> foo = {3,5,7,11,13,17,19,23};

  if ( all_of(foo.begin(), foo.end(), is_odd) )
    cout << "All the elements are odd numbers.\n";

  return 0;
}