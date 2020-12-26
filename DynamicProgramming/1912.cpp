#include<iostream>
#include<vector>
#include<limits>

using namespace std;

int main(){
    int n, tmp, max=numeric_limits<int>::min();
    vector<int> v, res;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    for(vector<int>::size_type i=0; i<v.size(); i++){
        if(i==0) res.push_back(v[i]);
        else{
            if(v[i]<(res[i-1]+v[i])) res.push_back(res[i-1]+v[i]);
            else res.push_back(v[i]);
        }
        if(max<res[i]) max = res[i];
    }
    cout << max << endl;
    return 0;
}