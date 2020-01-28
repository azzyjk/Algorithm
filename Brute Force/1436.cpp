#include<iostream>
using namespace std;

bool anal(int number){
	while(number>=666){
		if(number%1000==666) return true;
		else number/=10;
	}
	return false;
}

void find(int N){
	int cnt=0;
	int number=666;
	while(1){
		if(anal(number)==true) cnt++;
		if(cnt==N) {
			cout<<number<<endl;
			break;
		}
		number++;
	}
}

int main(){
	int N;
	cin>>N;
	
	find(N);
	
	return 0;
}