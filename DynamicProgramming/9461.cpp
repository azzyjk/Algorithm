#include<iostream>
#define MAX 101
using namespace std;

void check(long long* ar, int n){
	for(int i=1; i<=n; i++){
		if(ar[i]!=0) continue;
		ar[i] = ar[i-1]+ar[i-5];
	}
}

int main(){
	long long ar[MAX]={0, 1, 1, 1, 2, 2};
	int T, N;
	cin>>T;
	
	for(int i=0; i<T; i++){
		cin>>N;
		check(ar, N);
		cout<<ar[N]<<"\n";
	}
	return 0;
}