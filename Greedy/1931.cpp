#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}

int main(){
    int start, end, N, res=0, endTime=-1;
    vector< pair<int, int> > v;
    
    cin >> N;

    for(int i=0; i < N; i++){
        cin >> start >> end;
        v.push_back(make_pair(start, end));
    }

    sort(v.begin(), v.end(), compare);

    for(vector<pair<int, int> >::iterator iter = v.begin(); iter != v.end(); iter++){
        if(iter->first >= endTime){
            res = res + 1;
            endTime = iter->second;
        }
    }

    cout << res << endl;


    return 0;
}