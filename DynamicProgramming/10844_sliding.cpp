#include<iostream>

#define MOD 1000000000

using namespace std;

int main(){
    int N, now=1, res=0;
    int DP[2][11]={'\0',};
    
    cin >> N;

    for(int i=1; i<=9; i++){
        DP[1][i] = 1;
    }

    while(now != N){
        now = now+1;
        for(int i=0; i<=9; i++){
            if(i==0) DP[now%2][i] = DP[(now-1)%2][i+1];
            else DP[now%2][i] = (DP[(now-1)%2][i-1] + DP[(now-1)%2][i+1])%MOD;
        }
    }

    for(int i=0; i<=9; i++){
        res = (res+DP[now%2][i])%MOD;
    }

    cout << res << endl;

    return 0;
}