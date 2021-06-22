#include<iostream>
#include<unordered_map>
#include<utility>

using namespace std;

unordered_map<string, int> m;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    string name;
    
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> name;
        m[name]++;
    }

    cin >> M;
    for(int i=0; i<M; i++){
        cin >> name;
        cout << m[name] << " ";
    }
    cout << "\n";
    return 0;
}