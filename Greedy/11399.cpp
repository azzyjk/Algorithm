#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int N, P, sum=0;
	vector<int> v;
	
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>P;
		v.push_back(P);
	}
	sort(v.begin(), v.end());
	
	for(vector<int>::size_type i=1; i<v.size(); i++){
		v[i]=v[i]+v[i-1];
	}
	
	for(vector<int>::size_type i=0; i<v.size(); i++){
		sum+=v[i];
	}
	cout<<sum;
	return 0;
}