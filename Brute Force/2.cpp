#include<iostream>

using namespace std;

int main(){
	int N, sum=0;
	cin>>N;
	
	for(int i=0; i<N; i++){
		sum=i;
		for(int now=i; now>0; now=now/10) sum=sum+now%10;
		if(sum==N) {
			cout<<i;
			break;
		}
	}
	if(sum!=N) cout<<"0";
	return 0;
}