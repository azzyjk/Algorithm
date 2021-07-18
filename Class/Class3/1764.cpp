#include<iostream>
#include<map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, cnt=0;
    string tmp;
    map<string, int> m;

    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> tmp;
        m[tmp]++;
    }

    for(int i=0; i<M; i++){
        cin >> tmp;
        m[tmp]++;
        if(m[tmp]==2) cnt++;
    }

    cout << cnt << "\n";
    
    auto it = m.begin();
    while(it != m.end()){
        if(it->second == 2) cout << it->first << "\n";
        it ++;
    }
    return 0;
}