#include<iostream>
#include<set>
#include<cstring>
#include<utility>

using namespace std;

int main(){
	int N;
	string str;
	set<pair<int, string> > s;
	
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>str;
		s.insert(make_pair(str.length(), str));
	}
	
	for(set<pair<int, string> >::iterator iter=s.begin(); iter != s.end(); iter++){
		cout<<(*iter).second<<endl;
	}
	
	return 0;
}