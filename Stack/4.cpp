#include<iostream>
#include<stack>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	stack<char> s;
	string str;
	int i;
	while(getline(cin, str)){
		if(str.length()==1&&str[0]=='.') break;
		for(i=0; str[i]!='.'; i++){
			if(str[i]=='('||str[i]=='[') s.push(str[i]);
			else if(!s.empty()&&((str[i]==')'&&s.top()=='(')||(str[i]==']'&&s.top()=='['))) s.pop();
		}
		if(s.empty()&&str[i]=='.') cout<<"yes"<<endl;
			else {
				while(!s.empty()) s.pop();
				cout<<"no"<<endl;
			}
	}
	return 0;
}