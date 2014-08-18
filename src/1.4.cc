
#include <iostream>
#include <cstdlib>
#include <cstring>


using namespace std;


int main (int argc, char **argv) {
  if (argc != 3) {
    cout << "Usage: " << argv[0] << " string n" << endl;
    return 1;
  }

  cout << argv[1] << endl;
  int n = atoi(argv[2]);
  int m = 0;
  for (int i = 0; i < n; i++)
    if (argv[1][i] == ' ') m++;

  char *src = argv[1] + n - 1,
       *dst = argv[1] + n + 2*m - 1;
  while (src != argv[1]) {
    if (*src == ' ') {
      *dst-- = '0';
      *dst-- = '2';
      *dst-- = '%';
      src--;
    } else {
      *dst-- = *src--;
    }
  }

  cout << argv[1] << endl;
  return 0;
}
