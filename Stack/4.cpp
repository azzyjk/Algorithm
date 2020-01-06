#include<iostream>
#include<stack>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string str;
	stack<char> s;
	int i;
	bool check;
	while(1){
		check = true;
		getline(cin, str);
		if(str.length()==1&&str[0]=='.') break;
		
		for(i=0; str[i]!='.'; i++){
			if(str[i]=='('||str[i]=='[') s.push(str[i]);
			else if(str[i]==')'){
				if(!s.empty()&&s.top()=='(') s.pop();	
				else{
					check=false;
					break;
				}
			}
			else if(str[i]==']'){
				if(!s.empty()&&s.top()=='[') s.pop();
				else{
					check=false;
					break;
				}
			}
		}
		
		if(s.empty()&&str[i]=='.'&&check==true) cout<<"yes"<<"\n";
		else {
			while(!s.empty()) s.pop();
			cout<<"no"<<"\n";
		}
	}
	return 0;
}