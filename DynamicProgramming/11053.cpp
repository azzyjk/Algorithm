#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N, temp, max, now, res=0;
    vector<int> v, dp;
    cin >> N;

    for(int i=0; i<N; i++){
        cin>>temp;
        v.push_back(temp);
    }

    for(int i=0; i<v.size(); i++){
        now = v[i];
        max = 0; 
        for(int j=0; j<i; j++){
            if(v[j] < now && dp[j]>max) max = dp[j];
        }
        dp.push_back(max+1);
    }
    for(int i=0; i<dp.size(); i++){    
        if(res<dp[i]) res = dp[i];
    }
    cout << res << endl;
    return 0;
}