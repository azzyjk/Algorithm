#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int N;
	vector<int> v;
	
	cin>>N;
	
	while(N>0){
		v.push_back(N%10);
		N=N/10;
	}
	
	for(vector<int>::size_type i=0; i<v.size(); i++){
		cout<<v[i];
	}
	
	cout<<endl;
	
	sort(v.begin(), v.end(), greater<int>());
	
	for(vector<int>::size_type i=0; i<v.size(); i++){
		cout<<v[i];
	}
	
	return 0;
}