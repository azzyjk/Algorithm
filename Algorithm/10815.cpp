#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;

int search(int num){
    int start=0, end=v.size()-1, mid;

    while(start<=end){
        mid = (start+end)/2;
        if(v[mid] == num) break;
        if(v[mid]>num) end = mid -1;
        else if(v[mid]<num) start = mid + 1;
        
    }
    if(v[mid] == num) return 1;
    return 0;
}

int main(){
    int N, M, tmp;
    vector<int> find;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    cin >> M;

    for(int i=0; i<M; i++){
        cin >> tmp;
        find.push_back(tmp);
    }

    sort(v.begin(), v.end());
    
    for(int i=0; i<find.size(); i++){
        cout << search(find[i]) << " ";
    }

    return 0;
}