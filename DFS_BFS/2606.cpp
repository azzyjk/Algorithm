#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

void BFS(vector<int> v[], bool *arr){
    queue<int> q;
    int now, sum=0;
    q.push(1);

    while(!q.empty()){
        now = q.front();
        q.pop();
        if(arr[now]==1) continue;
        else {
            arr[now] = 1;
            sum++;
        }

        for(int i=0; i<v[now].size(); i++){
            if(arr[v[now][i]]!=1) q.push(v[now][i]);
        }
    }
    cout << sum-1 << endl;
}

void initArr(bool *arr, int N){
    for(int i=0; i<=N; i++) arr[i] = 0;
}


int main(){
    int N, number, v1, v2;
    cin >> N;
    vector<int> v[N+1];
    bool arr[N+1];
    cin >> number;

    for(int i=0; i<number; i++){
        cin >> v1 >> v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }

    for(int i=0; i<N; i++) sort(v[i].begin(), v[i].end());

    initArr(arr, N);

    if(N == 0 || N == 1) cout << 0;
    else BFS(v, arr);

    return 0;
}