#include<iostream>
#include<vector>

using namespace std;

int main(){
    int tmp, num=1, res=0, num1, num2, cnt=0;
    vector<int> v;
    
    cin >> tmp;
    v.push_back(tmp);
    
    for(int i=1; i<=tmp; i++){
        num1 = v[0];
        num2 = i;
        cnt = 0;
        while(1){
            num1 = num1 - num2;
            cnt ++;
            if(num1 < 0) break;
            num2 = num2 - num1;
            cnt++;
            if(num2 < 0) break;
        }
        if(cnt > res){
            res = cnt;
            num = i;
        }
    }

    v.push_back(num);
    while(1){
        if((v[v.size()-2] - v[v.size()-1]) >= 0) v.push_back(v[v.size()-2] - v[v.size()-1]);
        else break;
    }

    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}