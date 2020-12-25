#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int T, a, b, tmp, res;
    cin >> T;

    for(int i=0; i<T; i++){
        cin >> a >> b;
        tmp = 1;
        for(int j=0; j<b; j++){
            tmp = tmp * a;
            tmp = tmp%10;
        }
        if(tmp == 0) cout << "10" << endl;
        else cout << tmp << endl;
    }
    return 0;
}