#include<iostream>

#define MAX 10
using namespace std;

int ar[MAX];

int main(){
    string N;
    int res=0, now;

    cin >> N;

    for(int i=0; i<N.length(); i++){
        if(N[i] == '6' || N[i] == '9'){
            if(ar[6] < ar[9]) ar[6] = ar[6] + 1;
            else ar[9] = ar[9] + 1;
        }
        else ar[N[i]-'0'] = ar[N[i]-'0'] + 1;
    }

    for(int i=0; i<MAX; i++){
        if(res<ar[i]) res = ar[i];
    }
    cout << res << endl;
    return 0;
}