
#include <iostream>
#include <cstring>


using namespace std;


int main (int argc, char **argv) {
  if (argc != 2) {
    cout << "Usage: " << argv[0] << " string" << endl;
    return 1;
  }

  for (auto i = 0u; i < strlen(argv[1]); i++) {
    for (auto j = i + 1; j < strlen(argv[1]); j++) {
      if (argv[1][j] == argv[1][i]) {
        cout << "Char '" << argv[1][j] << "' repeated." << endl;
        return 0;
      }
    }
  }

  cout << "\"" << argv[1] << "\" has all unique characters." << endl;
  return 0;
}

