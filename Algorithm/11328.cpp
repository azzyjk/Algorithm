#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    string str1, str2;
    vector<char> first, second;
    int N, now=0;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> str1 >> str2;

        if(str1.length() != str2.length()) cout << "Impossible" << endl;
        else{
            first.clear();
            second.clear();
            now = 0;

            for(int j=0; j<str1.length(); j++) first.push_back(str1[j]);
            for(int j=0; j<str2.length(); j++) second.push_back(str2[j]);

            sort(first.begin(), first.end());
            sort(second.begin(), second.end());

            while(now < str1.length() && (first[now] == second[now])) now = now + 1;
            if(now == str1.length()) cout << "Possible" << endl;
            else cout << "Impossible" << endl;
        }
    }
    return 0;
}