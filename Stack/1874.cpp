#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> numV;
vector<char> charV;
stack<int> s;

void check(int& now){
	while(numV[now]==s.top()){
		s.pop();
		charV.push_back('-');
		now++;
		if(now>=numV.size()) break;
	}
}

int main(){
	int n, num, now=0;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		s.push(i);
		cin>>num;
		numV.push_back(num);
		charV.push_back('+');
		check(now);
	}

	if(now!=n) cout<<"NO\n";
	else{
		for(vector<char>::size_type i=0; i<charV.size(); i++){
			cout<<charV[i]<<"\n";
		}
	}
	return 0;
}