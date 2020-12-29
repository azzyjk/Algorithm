#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int end = 2 * N - 1;
  for (int i = 0; i < end; i++) {
    if (i <= N - 1) {
      for (int j = 0; j <= i; j++) cout << "*";
    } else {
      for (int j = 0; j <= end - i - 1; j++) cout << "*";
    }

    cout << endl;
  }
  return 0;
}