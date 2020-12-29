#include<iostream>
#include<cmath>

using namespace std;

void sort(int* ar, int N){
	for(int i=0; i<=sqrt(N); i++){
		if(ar[i]==0) continue;
		for(int j=i+i; j<=N; j+=i){
			ar[j]=0;
		}
	}
}

int main(){
	int M, N, num;
	cin>>M>>N;
	num=M;
	
	int ar[N+1];
	
	for(int i=0; i<=N; i++){
		if(i==0||i==1) ar[i] = 0;
		else ar[i]=i;
	}
	sort(ar, N);
	for(int i=0; i<=N;i++){
		if(ar[i]==0) continue;
		if(ar[i]>=M) cout<<ar[i]<<"\n";
	}
	return 0;
}