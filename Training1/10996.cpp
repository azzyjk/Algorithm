#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N*2; i++){
        for(int j =0; j<N; j++){
            if(i%2 == 0){
                if(j%2 == 1) cout << " ";
                else if(j%2 == 0) cout << "*";
            }
            if(i%2 == 1){
                if(j%2 == 1) cout << "*";
                else if(j%2 == 0) cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}