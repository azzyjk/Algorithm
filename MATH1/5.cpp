#include<iostream>

using namespace std;

int main(){
	int A, B, V;
	cin>>A>>B>>V;
	V=V-A;
	if((V%(A-B))!=0)cout<<V/(A-B)+2;
	else cout<<V/(A-B)+1;
	return 0;
}