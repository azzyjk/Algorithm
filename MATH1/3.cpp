#include<iostream>

using namespace std;

int main(){
	int N, sub=0, cnt=0;
	cin>>N;
	
	while(N>0){
		if(sub==0) N=N-1;
		else N=N-sub;
		sub=sub+6;
		cnt++;
	}
	cout<<cnt;
	
	return 0;
}