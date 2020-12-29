#include<iostream>
using namespace std;

int factorial(int n){
	int num=1;
	for(int i=2; i<=n; i++){
		num*=i;
	}
	return num;
}

int cal(int N, int K){
	return factorial(N)/(factorial(K)*factorial(N-K));
}

int main(){
	int N, K;
	cin>>N>>K;
	
	cout<<cal(N, K)<<"\n";
	return 0;
}