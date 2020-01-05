#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	long long ar[90]={0, 1};
	
	cin>>n;
	
	for(int i=2; i<=n; i++){
		ar[i]= ar[i-1]+ar[i-2];
	}
	
	cout<<ar[n]<<"\n";
	
	return 0;
}