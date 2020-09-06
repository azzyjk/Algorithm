#include<iostream>
#include<queue>
#include<utility>
#include<vector>

#define MMAX 50
#define NMAX 50

using namespace std;

vector< pair<int, int> > direction;
int ground[MMAX][NMAX], arr[MMAX][NMAX];

void BFS(int M, int N, int n, int m){\
    int nextX, nextY;

    arr[n][m] = 1;
    
    for(int i=0; i<direction.size(); i++){
        nextX = m + direction[i].first;
        nextY = n + direction[i].second;
        if(nextX >=0 && nextX < M && nextY >=0 && nextY < N){
            if(ground[nextY][nextX] == 1 && arr[nextY][nextX] == 0) BFS(M, N, nextY, nextX);
        }
    }
    
}

void initArr(int (*ground)[NMAX]){
    for(int i=0; i<MMAX; i++){
        for(int j=0; j<NMAX; j++){
            ground[i][j]=0;
        }
    }
}

void addDirection(){
    direction.push_back(make_pair(1, 0));
    direction.push_back(make_pair(-1, 0));
    direction.push_back(make_pair(0, 1));
    direction.push_back(make_pair(0, -1));
}

int main(){
    int T, M, N, K, x, y, res = 0;

    cin >> T;
    addDirection();

    for(int i=0; i<T; i++){
        res = 0;

        cin >> M >> N >> K;

        initArr(ground);
        initArr(arr);

        for(int j=0; j<K; j++){
            cin >> x >> y;
            ground[y][x] = 1;
        }

        for(int n=0; n<N; n++){
            for(int m=0; m<M; m++){
                
                if(ground[n][m] == 1 && arr[n][m] == 0){
                    res++;
                    BFS(M, N, n, m);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}