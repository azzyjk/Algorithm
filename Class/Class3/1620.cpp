#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    string tmp;
    map<string, int> m;
    string str[100005];

    cin >> N >> M;

    for(int i=1; i<=N; i++){
        cin >> tmp;
        m.insert({tmp, i});
        str[i] = tmp;
    }

    for(int i=0; i<M; i++){
        cin >> tmp;
        if(isdigit(tmp[0])){
            int num = stoi(tmp);
            cout << str[num] << "\n";
        }
        else{
            cout << m[tmp] << "\n";
        }
    }
    return 0;
}