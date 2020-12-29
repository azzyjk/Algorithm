#include<iostream>

using namespace std;

int main(){
	int N, sum;
	cin>>N;
	
	for(int i=N/5; i>=0; i--){
		if((N-(5*i))%3==0){
			sum=i+(N-(5*i))/3;
			cout<<sum<<endl;
			return 0;
		}
	}
	cout<<"-1";
	return 0;
}