#include<iostream>

using namespace std;

int pibo(int a){
	if(a==0) return 0;
	else if(a==1) return 1;
	return pibo(a-1)+pibo(a-2);
}

int main(){
	int n;
	cin>>n;
	cout<<pibo(n);
	return 0;
}