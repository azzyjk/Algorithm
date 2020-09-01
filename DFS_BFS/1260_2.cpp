#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;

void initArr(bool *arr, int N){
    for(int i=0; i<=N; i++){
        arr[i] = 0;
    }
}

void DFS(vector<int> v[], int V, bool *arr){
    stack<int> s;
    s.push(V);
    int now;

    while(!s.empty()){
        now = s.top();
        s.pop();

        if(arr[now]==1) continue;
        else arr[now]=1;

        cout << now << " ";

        for(int i=v[now].size()-1; i>=0; i--){
            if(arr[v[now][i]] == 1) continue;
            s.push(v[now][i]);
        }
    }
    cout << endl;
}

void BFS(vector<int> v[], int V, bool *arr){
    queue<int> q;
    int now;
    q.push(V);

    while(!q.empty()){
        now = q.front();
        q.pop();
        if(arr[now]==1) continue;
        else arr[now]=1;

        cout << now << " ";

        for(int i=0; i<v[now].size(); i++){
            if(arr[v[now][i]]!= 1) q.push(v[now][i]);
        }

    }
    cout << endl;
}

int main(){
    int N, M, V, v1, v2;
    cin >> N >> M >> V;
    bool arr[N+1];
    vector<int> v[N+1];
    
    queue<int> q;

    for(int i=0; i<M; i++){
        cin >> v1 >> v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }

    for(int i=0; i<N; i++){
        sort(v[i].begin(), v[i].end());
    }
    
    initArr(arr, N);

    DFS(v, V, arr);

    initArr(arr, N);

    BFS(v, V, arr);
    // for(int i=0; i<N; i++){
    //     for(int j=0; j<v[i].size(); j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}