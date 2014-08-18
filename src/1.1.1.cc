
#include <iostream>
#include <cstring>


using namespace std;


int main (int argc, char **argv) {
  if (argc != 2) {
    cout << "Usage: " << argv[0] << " string" << endl;
    return 1;
  }
  
  bool presence[256];
  for (int i = 0; i < 256; i++) {
    presence[i] = false;
  }
  
  for (auto i = 0u; i < strlen(argv[1]); i++) {
    if (presence[(int) argv[1][i]]) {
      cout << "Char '" << argv[1][i] << "' repeated." << endl;
      return 0;
    }
    presence[(int) argv[1][i]] = true;
  }

  cout << "\"" << argv[1] << "\" has all unique characters." << endl;
  return 0;
}

