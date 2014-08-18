
#include <iostream>
#include <cstring>


using namespace std;


int main (int argc, char **argv) {
  if (argc != 2) {
    cout << "Usage: " << argv[0] << " string" << endl;
    return 1;
  }

  cout << argv[1] << endl;
  char t;
  for (size_t i = 0, j = strlen(argv[1]) - 1; i < strlen(argv[1]) / 2; i++, j--) {
    t = argv[1][i];
    argv[1][i] = argv[1][j];
    argv[1][j] = t;
  }

  cout << argv[1] << endl;
  return 0;
}

