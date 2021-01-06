#include<iostream>
#include<vector>

using namespace std;

int main(){
    string word;
    vector<char> v;

    cin >> word;

    v.push_back(word[0]);

    for(int i=0; i<word.length(); i++){
        if(word[i] == '-' && i+1 < word.length()) v.push_back(word[i+1]);
    }
    
    for(vector<char>::size_type i = 0; i<v.size(); i++){
        cout << v[i];
    }
    cout << endl;
    return 0;
}