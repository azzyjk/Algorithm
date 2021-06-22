#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long L, res=0;
    long long multi = 1;
    string str;
    cin >> L;
    cin >> str;

    for(long long i=0; i<L; i++){
        res = (res + (str[i]-'a'+1)*multi)%1234567891;
        multi = (multi * 31) % 1234567891;
    }
    cout << res << endl;
    return 0;
}