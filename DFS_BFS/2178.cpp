#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include <utility>

#define NMAX 100
#define MMAX 100
using namespace std;

int arr[NMAX][MMAX];
bool visit[NMAX][MMAX];
int res[NMAX][MMAX];
vector< pair<int ,int> > direction;

void addDirection(){
    direction.push_back(make_pair(0, 1));
    direction.push_back(make_pair(0, -1));
    direction.push_back(make_pair(-1, 0));
    direction.push_back(make_pair(1, 0));
}

void BFS(int N, int M){
    int x, y, nextX, nextY;
    queue< pair<int, int> > q;

    q.push(make_pair(0, 0));

    while(!q.empty()){
        y = q.front().first;
        x = q.front().second;
        q.pop();
        visit[y][x] = true;
        for(int i =0; i<direction.size(); i++){
            nextY = y + direction[i].first;
            nextX = x + direction[i].second;

            if(nextY>=0 && nextX >=0 && nextY < N && nextX < M){
                if(visit[nextY][nextX] == false && arr[nextY][nextX] == 1 && res[nextY][nextX]==0){ 
                    res[nextY][nextX] = res[y][x]+1;
                    q.push(make_pair(nextY, nextX));
                }
                
            }
            
        }
    }
}

int main(){
    int N, M, tmp;
    cin >> N >> M;

    res[0][0] = 1;
    addDirection();

    cin.get();
    for(int i=0; i< N; i++){
        for(int j=0; j<M; j++){
            tmp = cin.get();
            arr[i][j] = tmp-'0';
        }
        cin.get();
    }
    BFS(N, M);
    
    cout << res[N-1][M-1] <<endl;
    return 0;
}