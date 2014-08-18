
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main () {
  int N;
  cin >> N;

  vector<vector<int> > M;
  M.resize(N);
  for (int i = 0; i < N; i++) M[i].resize(N);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> M[i][j];
    }
  }
  
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i; j++) {
      swap(M[i][j], M[j][i]);
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << M[i][j];
    }
    cout << endl;
  }

  return 0;
}

