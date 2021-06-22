#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v(10010);
    int K, N, res=0;

    cin >> K >> N;
    for(int i=0; i<K; i++){
        cin >> v[i];
    }

    long long left=1, right=INT32_MAX;
    while(left<=right){
        long long mid = (left+right)/2;
        int cnt=0;
        for(int i=0; i<K; i++){
            cnt += v[i]/mid;
        }
        if(cnt>=N) {
            left = mid+1;
            if(res<mid) res = mid;
        }
        else right = mid-1;
    }

    cout << res << "\n";
    

    return 0;
}