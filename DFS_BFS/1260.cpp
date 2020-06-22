#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

void resetCheck(bool check[], int N) {
  for (int i = 0; i < N + 1; i++) {
    check[i] = false;
  }
}

void DFS(vector<int> v[], int V, bool check[]) {
  stack<int> s;
  int now = 0, next = 0;
  s.push(V);
  check[V] = true;
  cout << V << " ";

  while (!s.empty()) {
    now = s.top();
    s.pop();
    for (vector<int>::size_type i = 0; i < v[now].size(); i++) {
      next = v[now][i];
      if (check[next] == false) {
        cout << next << " ";
        check[next] = true;
        s.push(now);
        s.push(next);
        break;
      }
    }
  }
  cout << endl;
}

void BFS(vector<int> v[], int V, bool check[]) {
  queue<int> q;
  int now = 0, next = 0;
  q.push(V);
  check[V] = true;
  while (!q.empty()) {
    now = q.front();
    cout << now << " ";
    q.pop();
    for (vector<int>::size_type i = 0; i < v[now].size(); i++) {
      next = v[now][i];
      if (check[next] == false) {
        check[next] = true;
        q.push(next);
      }
    }
  }
}

int main() {
  int N, M, V, start, end;

  cin >> N >> M >> V;
  vector<int> v[N + 1];
  bool check[N + 1];

  resetCheck(check, N);

  for (int i = 0; i < M; i++) {
    cin >> start >> end;
    v[start].push_back(end);
    v[end].push_back(start);
  }

  DFS(v, V, check);
  resetCheck(check, N);
  BFS(v, V, check);

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