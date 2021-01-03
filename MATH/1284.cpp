#include<iostream>

using namespace std;

int main(){
    string N;
    int res;
    while(true){
        cin >> N;
        if(N=="0") break;
        
        res = 0;

        for(int i=0; i<N.length(); i++){
            if(N[i] == '1') res += 2;
            else if(N[i] == '0') res += 4;
            else res += 3;
        }
        cout << (N.length()-1 + 2 + res) << endl;
    }
    
    return 0;
}