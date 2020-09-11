#include<iostream>
#include<vector>
#include<queue>
#include <utility>

#define NMAX 100
#define MMAX 100
using namespace std;

int arr[NMAX][MMAX];
vector< pair<int ,int> > direction;
vector<int> res;

void addDirection(){
    direction.push_back(make_pair(0, 1));
    direction.push_back(make_pair(0, -1));
    direction.push_back(make_pair(-1, 0));
    direction.push_back(make_pair(1, 0));
}

void BFS(int N, int M, int n, int m, int now, int (*visit)[MMAX]){
    int x, y, nextX, nextY;
    int nowVisit[N][M];

    y = n;
    x = m;
    visit[y][x] = true;
    now++;
    
    copy(&visit[0][0], &visit[0][0]+N*M, &nowVisit[0][0]);

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << nowVisit[i][j] << " ";
        }
        cout << endl;
    }
    if(y == N-1 && x == M-1){
        res.push_back(now);
    }
    else{
        for(int i =0; i<direction.size(); i++){
            nextY = y + direction[i].first;
            nextX = x + direction[i].second;

            if(nextY>=0 && nextX >=0 && nextY < N && nextX < M){
                if(visit[nextY][nextX] == false && arr[nextY][nextX] == 1){ 
                    BFS(N, M, nextY, nextX, now, arr);
                    cout << "back" << endl;
                }
            }
            
        }
    }
}

int main(){
    int N, M, tmp;
    bool visit[NMAX][MMAX]={{0}};
    cin >> N >> M;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << visit[i][j] << " ";
        }
        cout << endl;
    }

    addDirection();
    cin.get();
    for(int i=0; i< N; i++){
        for(int j=0; j<M; j++){
            tmp = cin.get();
            arr[i][j] = tmp-'0';
        }
        cin.get();
    }
    BFS(N, M, 0, 0, 0, arr);
    cout << "res size : " << res.size()<<endl;
    for(int i=0; i<res.size(); i++){
        cout << res[i] <<endl;
    }
    return 0;
}