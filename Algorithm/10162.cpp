#include<iostream>

using namespace std;

int main(){
    int T, A_num=0, B_num=0, C_num=0;

    cin >> T;

    if(T%10 == 0){
        if(T>=300) {
            A_num = T/300;
            T = T-(300*A_num);
        }
        if(T>=60) {
            B_num = T/60;
            T = T-(60*B_num);
        }
        if(T>=10) {
            C_num = T/10;
            T = T-(10*C_num);
        }
        cout << A_num << " " << B_num << " " << C_num << endl;
    }
    else{
        cout << "-1" << endl;
    }
    return 0;
}