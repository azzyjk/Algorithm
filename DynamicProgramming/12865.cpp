#include<iostream>
#include<vector>
#include<utility>

#define Y 101
#define X 100001

using namespace std;

int res[Y][X]; 

int main(){
    int N, K, w, v;
    vector<int> W, V;

    cin >> N >> K;

    W.push_back(0);
    V.push_back(0);

    for(int i=0; i<N; i++){
        cin >> w >> v;
        W.push_back(w);
        V.push_back(v);
    }

    for(int i=1; i<=N; i++){
        for(int k=0; k<=K; k++){
            if(k<W[i]) res[i][k] = res[i-1][k];
            else {
                if((res[i-1][k-W[i]]+V[i])>res[i-1][k]) res[i][k] = res[i-1][k-W[i]] + V[i];
                else res[i][k] = res[i-1][k];
            }
        }
    }
    cout << res[N][K] << endl;
    return 0;
}