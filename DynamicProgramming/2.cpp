#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int one[41]={0, 1}, zero[41]={1, 0};
	int T, num;
	cin>>T;
	for(int j=0; j<T; j++){
		cin>>num;
		for(int i=2; i<=num; i++){
			if(one[i]!=0) continue;
			one[i]=one[i-1]+one[i-2];
			zero[i]=zero[i-1]+zero[i-2];
		}
		cout<<zero[num]<<" "<<one[num]<<"\n";
	}
	
	return 0;
}