#include<iostream>

using namespace std;

int main(){
    int in, out, now = 0, res=0;
    for(int i=0; i<4; i++){
        cin >> out >> in;
        now = now - out;
        if(res < now) res = now;
        now = now + in;
        if(res < now) res = now;
    }
    cout << res << endl;
    return 0;
}