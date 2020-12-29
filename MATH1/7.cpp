#include<iostream>

using namespace std;

int res(int x, int y){
	if(x==1) return 1;
	else if(y==0) return x;
	else return res(x-1, y)+res(x, y-1);
}

int main(){
	int T, k, n;
	cin>>T;
	
	for(int i=0; i<T; i++){
		cin>>k>>n;
		cout<<res(n, k)<<endl;
	}
	return 0;
}