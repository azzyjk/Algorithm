#include<iostream>
using namespace std;

void change (int* ar, int* sum, int N){
	for(int i=0; i<=N; i++){
		sum[i]=ar[i];
	}
}

void put(int* ar, int* sum, int N){
	for(int i=0; i<=N; i++){
		if(i==0)ar[i]+=sum[i];
		else if(i==N)ar[N]+=sum[N-1];
		else{
			if(sum[i-1]>sum[i]) ar[i]+=sum[i-1];
			else ar[i]+=sum[i];
		}
	}
}

int small(int* ar, int n){
	int max=0;
	for(int i=0; i<n; i++){
		if(max<ar[i]) max=ar[i];
	}
	return max;
}

int main(){
	int ar[501]={'\0',}, sum[501]={'\0',}, N;
	cin>>N;
	
	for(int i=0; i<N; i++){
		for(int j=0; j<=i; j++)	cin>>ar[j];
		put(ar, sum, i);
		change(ar, sum, i);
	}
	cout<<small(sum, N);
	return 0;
}