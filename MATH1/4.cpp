#include<iostream>

using namespace std;

void res(int x, int i){
	if((x-i)>0) res(x-i, i+1);
	else{
		if((i%2)!=0) cout<<(i-x+1)<<"/"<<x;
		else cout<<x<<"/"<<(i-x+1);
	}
}

int main(){
	int X, i=1;
	cin>>X;
	res(X, i);
	return 0;
}