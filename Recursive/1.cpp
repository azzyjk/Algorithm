#include<iostream>

using namespace std;

void facto(int num, int& sum){
	if(num>1) {
		sum*=num;
		facto(num-1, sum);
	}
}

int main(){
	int sum=1, num;
	cin>>num;
	facto(num, sum);
	cout<<sum;
	return 0;
}