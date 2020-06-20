#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool test(int a, int b) {
  if (a > b)
    return true;
  else
    return false;
}

int main() {
  int N, tmp, sum = 0;
  vector<int> A, B;

  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> tmp;
    A.push_back(tmp);
  }
  for (int i = 0; i < N; i++) {
    cin >> tmp;
    B.push_back(tmp);
  }

  sort(A.begin(), A.end(), test);
  sort(B.begin(), B.end());

  for (int i = 0; i < N; i++) {
    sum += A[i] * B[i];
  }
  cout << sum << endl;

  return 0;
}
