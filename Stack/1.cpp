#include<iostream>
#include<stack>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int N, num;
	string str;
	stack<int> s;
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>str;
		if(str=="push"){
			cin>>num;
			s.push(num);
		}
		else if(str=="top"){
			if(s.empty()) cout<<"-1"<<"\n";
			else cout<<s.top()<<"\n";
		}
		else if(str=="size"){
			cout<<s.size()<<"\n";
		}
		else if(str=="empty"){
			cout<<s.empty()<<"\n";
		}
		else if(str=="pop"){
			if(!s.empty()) {
				cout<<s.top()<<"\n";
				s.pop();
			}
			else cout<<"-1"<<"\n";
		}
	}
	return 0;
}