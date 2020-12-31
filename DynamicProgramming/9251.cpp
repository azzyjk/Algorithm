#include<iostream>

using namespace std;

int main(){
    int max=0, tmp=0, res=0;
    int DP[1000] = {'\0',};
    string str1, str2;

    cin >> str1 >> str2;

    for(int i=0; i<str2.length(); i++){
        max = 0;
        for(int j=0; j<str1.length(); j++){
            tmp = max;

            if(max<DP[j]) max = DP[j];

            if(str1[j]==str2[i]) DP[j] = tmp+1;
            
        }
    }

    for(int i=0; i<str1.length(); i++){
        if(res<DP[i]) res = DP[i];
    }
    cout << res << endl;
    return 0;
}