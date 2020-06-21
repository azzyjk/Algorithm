#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

stack<int> s;

void DFS(vector<int> v[], int V, bool* check) {
  int now = 0;
  s.push(V);
  check[V] = true;

  // cout << V << endl;

  while (!s.empty()) {
    now = s.top();
    // s.pop();
    for (vector<int>::size_type i = 0; i < v[now].size(); i++) {
      if (check[v[now][i]] == false) {
        check[v[now][i]] = true;
        s.push(v[now][i]);
        DFS(v, V, check);
      }
    }
  }
}

int main() {
  int N, M, V, start, end;

  cin >> N >> M >> V;
  queue<int> q;
  stack<int> s;
  vector<int> v[N + 1];
  bool check[N + 1];

  for (int i = 0; i < M; i++) {
    cin >> start >> end;
    v[start].push_back(end);
    v[end].push_back(start);
  }

  DFS(v, V, check);
  cout << "start" << endl;
  while (!s.empty()) {
    cout << s.top() << endl;
    s.pop();
  }

  // v[1].pop_back();
  // cout << v[1].size();

  // for (int i = 0; i < N + 1; i++) {
  //   cout << i << " : " << check[i];
  // }

  // for (int i = 1; i < N; i++) {
  //   cout << i << "번째 : ";
  //   for (int j = 0; j < v[i].size(); j++) {
  //     cout << v[i][j] << " " << endl;
  //   }
  // }
  return 0;
}