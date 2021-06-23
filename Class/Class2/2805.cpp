#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    long long res = 0;
    vector<int> v(1000010);
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> v[i];
    }
    
    long long left=0, right = 1000000000;
    while(left<=right){
        long long mid = (left+right)/2;
        long long len=0;
        for(int i=0; i<N; i++){
            if(mid<v[i]) len += v[i]-mid;
        }
        if(len >= M) {
            left = mid + 1;
            if(res < mid) res = mid;
        }
        else right = mid - 1;
    }
    cout << res << endl;
    return 0;
}