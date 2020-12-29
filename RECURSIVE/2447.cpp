#include<iostream>
#define MAX 2188
using namespace std;

int ar[MAX][MAX];

void recur(int x, int y, int N){
	int cnt=0;
	if(N==1) ar[x][y]=1;
	else{
		for(int i=x; i<x+N; i+=N/3){
			for(int j=y; j<y+N; j+=N/3){
				cnt++;
				if(cnt==5) continue;
				else recur(i, j, N/3);
			}
		}
	}
	
}

void Print(int N){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(ar[i][j]==1) cout<<"*";
			else cout<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	int N;
	cin>>N;
	
	recur(0, 0, N);
	Print(N);
	return 0;
}