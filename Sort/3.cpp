#include<iostream>
#define MAX 10000

using namespace std;

void set(int *ar){
	for(int i=0; i<MAX-1; i++){
		ar[i+1]+=ar[i];
	}
}

void print(int ar[], int N){
	for(int i=0; i<N; i++){
		cout<<ar[i]<<endl;
	}
}

int main(){
	int N, num, ar[MAX]={'\0',};
	cin>>N;
	int res[N], raw[N];

	for(int i=0; i<N; i++){
		cin>>num;
		raw[i] = num;
		ar[num]++;
	}
	set(ar);
	for(int i=0; i<N; i++){
		res[ar[raw[i]]-1]=raw[i];
		ar[raw[i]]--;
	}
	print(res, N);
	
	
}