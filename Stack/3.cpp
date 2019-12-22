#include<iostream>
#include<stack>
#include<cstring>

using namespace std;

int main(){
	int T;
	string str;
	stack<char> s;
	cin>>T;
	
	for(int i=0; i<T; i++){
		cin>>str;
		for(int i=0; str[i]!='\0'; i++){
			if(str[i]=='(') s.push(str[i]);
			else if(str[i]==')'){
				if(!s.empty()&&s.top()=='(') s.pop(); 
				else {
					cout<<"NO"<<endl;
					break;
				}
			}
			if(s.size()==0&&str[i+1]=='\0') cout<<"YES"<<endl;
		}
		if(!s.empty()) cout<<"NO"<<endl;
		while(!s.empty()){
			s.pop();
		}
	}
	return 0;
}