#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	long long ar[1000000]={0, 1, 2};
	unsigned int N;
	cin>>N;
	
	for(int i=3; i<=N; i++){
		ar[i]=(ar[i-1]+ar[i-2])%15746;
	}
	
	cout<<ar[N]<<"\n";
	return 0;
}