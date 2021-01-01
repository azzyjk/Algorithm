#include<iostream>

using namespace std;

int maxReturn(int a, int b, int c){
    if(a>=b & a>=c) return a;
    if(b>=a & b>=c) return b;
    if(c>=a & c>=b) return c;
    return 0;
}

int main(){
    int N, M, tmp;
    int ar[1001][1001]={'\0'}, DP[1001][1001]={'\0'};
    
    cin >> N >> M;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            cin >> ar[i][j];
        }
    }

    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            DP[i][j] = maxReturn(DP[i-1][j], DP[i-1][j-1], DP[i][j-1]) + ar[i][j];
        }
    }   
    cout << DP[N][M] << endl;
    return 0;
}