#include<iostream>

using namespace std;

int main(){
	int T, H, W, N, res=0;
	cin>>T;
	for(int i=0; i<T; i++){
		cin>>H>>W>>N;
		res = (((N-1)%H)+1)*100;
		res += ((N-1)/H)+1;
		cout<<res<<endl;;
	}
	return 0;
}