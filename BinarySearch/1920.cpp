#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;

void solution(int N, int find){
    int start = 0, end = N-1, mid;

    while(start <= end){
        mid = (start+end) / 2;
        if(v[mid] == find){
            cout << "1\n";
            return;
        }
        else if(v[mid] > find) end = mid - 1;
        else start = mid + 1;
    }
    cout << "0\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, find, tmp;

    cin >> N;

    for(int i=0; i<N; i++) {
        cin>>tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    cin >> M;

    for(int i=0; i<M; i++){
        cin >> find;
        solution(N, find);
    }
    return 0;
}