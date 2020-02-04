#include <iostream>
#include <sstream>

#include "sum.hpp"
#include "sum_fast.hpp"
#include "sum_bad.hpp"

using namespace std;

int main(int argc, char** argv)
{
  stringstream ss;
  ss << argv[1] << ' ' << argv[2];

  int begin, end;
  ss >> begin >> end;

  int total = sum(begin, end);
  cout << "The sum from " << argv[1] << " to " << argv[2] << " is " << total << endl;

  total = sum_fast(begin, end);
  cout << "The fast version is " << total << endl;

  total = sum_bad(begin, end);
  cout << "The bad version is " << total << endl;

  return 0;
}
