
#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


int main (int argc, char **argv) {
  if (argc != 3) {
    cout << "Usage: " << argv[0] << " str1 str2" << endl;
    return 1;
  }

  string s1(argv[1]);
  string s2(argv[2]);
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  if (s1 == s2) {
    cout << argv[2] << " is a permutation of " << argv[1] << endl;
  } else {
    cout << argv[2] << " isn't a permutation of " << argv[1] << endl;
  }

  return 0;
}

