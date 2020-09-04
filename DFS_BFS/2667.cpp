#include<iostream>
#include<stack>
#include<algorithm>
#include<utility>
#include<vector>
#define MAX 25

using namespace std;

vector<int> res;

void DFS(vector<string> v, int startI, int startJ, bool (*arr)[MAX], int N){
    int now, i, j, sum=0;
    stack< pair<int, int> > s;
    s.push(make_pair(startI, startJ));

    while(!s.empty()){
        i = s.top().first;
        j = s.top().second;
        s.pop();
    
        if(arr[i][j]==0) {
            sum++;
            arr[i][j]=1;

            if(j>0) {if(arr[i][j-1]==0 && v[i][j-1] == '1') {s.push(make_pair(i, j-1));}}
            if(j<N) {if(arr[i][j+1]==0 && v[i][j+1] == '1') {s.push(make_pair(i, j+1));}}
            if(i>0) {if(arr[i-1][j]==0 && v[i-1][j] == '1') {s.push(make_pair(i-1, j));}}
            if(i<N) {if(arr[i+1][j]==0 && v[i+1][j] == '1') {s.push(make_pair(i+1, j));}}
        }
    }

    res.push_back(sum);
}

int main(){
    int N;
    bool arr[MAX][MAX]={0,};
    string tmp;
    vector<string> v;

    cin>> N;

    for(int i=0; i<N; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(v[i][j]=='1' && arr[i][j]==0) DFS(v, i, j, arr, N);
        }
    }
    cout << res.size() << endl;

    sort(res.begin(), res.end());

    for(int i=0; i<res.size(); i++){
        cout << res[i] << endl;
    }
    return 0;
}