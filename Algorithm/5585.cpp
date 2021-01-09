#include<iostream>

using namespace std;

int main(){
    int pay, res=0;

    cin >> pay;
    pay = 1000 - pay;

    while(pay !=0){
        if(pay>=500) pay = pay - 500;
        else if(pay>=100) pay = pay - 100;
        else if(pay>=50) pay = pay - 50;
        else if(pay>=10) pay = pay - 10;
        else if(pay>=5) pay = pay - 5;
        else if(pay>=1) pay = pay - 1;
        res = res + 1;
    }
    cout << res << endl;
    return 0;
}