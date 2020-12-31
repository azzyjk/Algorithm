#include <iostream>

using namespace std;

int main(){
    long long DP[81]={'\0',}, res=0;
    int N;

    cin >> N;

    DP[1] = 1;
    DP[2] = 1;

    for(int i=3; i<=N; i++){
        DP[i] = DP[i-1]+DP[i-2];
    }

    res = (DP[N] * 4) + (DP[N-1] * 2);
    cout << res << endl;
    return 0;
}