#include<iostream>

using namespace std;

int main(){
    int N, sum=0, temp;
    cin>>N;
    for(int i=0; i<N; i++){
        if(i!=N-1) {
            cin >> temp;
            sum += temp-1;
        }
        else{
            cin >> temp;
            sum += temp;
        }
    }
    cout << sum;
    return 0;
}