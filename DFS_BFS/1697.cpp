#include<iostream>
#include<queue>
#include<unistd.h>

using namespace std;

queue<int> q;
int DP[100001];

int main(){
    int N, K, depth = 0, size = 0, now, meet = 0;

    cin >> N >> K;

    DP[N] = 1;
    q.push(N);

    if(N == K) meet = 1;
    while(meet==0){
        depth = depth + 1;
        size = q.size();

        for(int i=0; i < size; i++){
            now = q.front();
            q.pop();

            if(now-1 == K || now+1 == K || now * 2 == K) {
                meet = 1;
                break;
            }
            if(now-1 >= 0 && DP[now-1] == 0) {
                q.push(now-1);
                DP[now-1] = 1;
            }
            if(now+1 <= 100000 && DP[now+1] == 0) {
                q.push(now+1);
                DP[now+1] = 1;
            }
            if(now*2 <= 100000 && DP[now*2] == 0) {
                q.push(now*2);
                DP[now*2] = 1;
            }
        }
    }
    cout << depth << endl;  
    return 0;
}