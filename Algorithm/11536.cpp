#include<iostream>
#include<vector>

#define DESC -1
#define INCS 1
#define NEITHER 0

using namespace std;

int compareName(string A, string B){
    int i=0;
    while(A[i]==B[i]) i++;
    if(A[i] < B[i]) return INCS;
    else if(A[i] > B[i]) return DESC;
    return 0;
}

int main(){
    int N,res;
    string tmp;
    char check;
    vector<string> v;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    for(vector<string>::size_type i=0; i<v.size()-1; i++){
        if(i==0) res = compareName(v[i], v[i+1]);
        else{
            if(res != compareName(v[i], v[i+1])) res = 0;
        }
    }

    if(res == INCS) cout << "INCREASING" << endl;
    else if (res == DESC) cout << "DECREASING" << endl;
    else cout << "NEITHER" << endl;
    
    return 0;
}