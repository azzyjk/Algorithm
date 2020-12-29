#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N, trash;
	long long num;
	vector<long long>v;
	cin>>N;
	
	if(N==1){
		cin>>num;
		cout<<num*num;
	}
	
	else{
		for(int i=0; i<N; i++){
			cin>>num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());
		cout<<v.front()*v.back();
	}
	
	return 0;
}