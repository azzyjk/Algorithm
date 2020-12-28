#include<iostream>

#define MOD 1000000000

using namespace std;

int sumRes(int* ar){
    int res=0;

    for(int i=0; i<=9; i++){
        res = (res+ar[i])%MOD;
    }
    return res;
}

int main(){
    int N, res=0;
    int DP[101][10]={'\0',};

    cin >> N;

    for(int i=1; i<=9; i++){
        DP[1][i] = 1;
    }

    for(int i = 2; i<=N; i++){
        for(int j=0; j<=9; j++){
            if(j==0) DP[i][j] = DP[i-1][j+1]%MOD;
            else if(j==9) DP[i][j] = DP[i-1][j-1]%MOD;
            else DP[i][j] = (DP[i-1][j-1] + DP[i-1][j+1])%MOD;
        }
    }

    cout << sumRes(DP[N]) << endl;

    return 0;
}