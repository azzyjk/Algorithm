#include<iostream>
#include<stack>

using namespace std;

int main(){
	int K, num, sum=0;
	stack<int> s;
	cin>>K;
	
	for(int i=0; i<K; i++){
		cin>>num;
		if(num!=0) s.push(num);
		else if(num==0) s.pop();
	}
	
	while(!s.empty()){
		sum+=s.top();
		s.pop();
	}
	cout<<sum;
	return 0;
}