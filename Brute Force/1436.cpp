#include<iostream>
#include<vector>
using namespace std;

bool anal(int number){
	vector<int> v;
	while(number!=0){
		v.push_back(number%10);
		number/=10;
	}
	for(int i=0; i<v.size()-2; i++){
		if(v[i]==6&&v[i+1]==6&&v[i+2]==6) return true;
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