
#include <iostream>
#include <string>


using namespace std;


string compress (string &s);


int main (int argc, char **argv) {
  if (argc != 2) {
    cout << "Usage: " << argv[0] << " str" << endl;
    return 1;
  }
  
  string s(argv[1]);
  cout << compress(s) << endl;
  return 0;
}


string compress (string &s) {
  string r;
  unsigned int i, j, count;
  for (i = 0; i < s.length(); i += count) {
    count = 0;
    j = i;
    while (s[j] == s[i] && j < s.length()) {
      count++;
      j++;
    }
    r.push_back(s[i]);
    r.append(to_string(count));
  }

  return s.length() < r.length() ? s : r;
}

