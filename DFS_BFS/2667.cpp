#include<iostream>
#include<stack>
#include<algorithm>
#include<utility>
#include<vector>
#define MAX 25

using namespace std;


vector< pair<int, int> > direction;
int sum, N;
bool arr[MAX][MAX]={0,};

void DFS(vector<string> v, int i, int j){
    int nextX, nextY;
    sum ++;

    if(arr[i][j]==0){
        arr[i][j] = 1;
        for(int idx=0; idx<direction.size(); idx++){
            nextY = i+direction[idx].first;
            nextX = j+direction[idx].second;
            
            if(nextY<N && nextY>=0 && nextX  <N && nextX>=0) {
                if(arr[nextY][nextX] == 0 && v[nextY][nextX] == '1') DFS(v, nextY, nextX);
            }
        }
    }
}

void addDirection(){
    direction.push_back(make_pair(1,0));
    direction.push_back(make_pair(-1,0));
    direction.push_back(make_pair(0,1));
    direction.push_back(make_pair(0,-1));
}

int main(){
    string tmp;
    vector<string> v;
    vector<int> res;

    cin>> N;

    addDirection();

    for(int i=0; i<N; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(v[i][j]=='1' && arr[i][j]==0) {
                sum = 0;
                DFS(v, i, j);
                res.push_back(sum);
            }
        }
    }

    cout << res.size() << endl;

    sort(res.begin(), res.end());

    for(int i=0; i<res.size(); i++){
        cout << res[i] << endl;
    }
    return 0;
}