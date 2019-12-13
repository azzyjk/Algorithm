#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int N, K, num, count=0;
	vector<int> v;
	
	cin>>N>>K;
	
	for(int i=0; i<N; i++){
		cin>>num;
		v.push_back(num);
	}
	sort(v.begin(), v.end(), greater<int>());
	
	for(vector<int>::size_type i=0; i<v.size(); i++){
		while(K>=v[i]){
			count++;
			K=K-v[i];
		}
	}
	
	cout<<count;
	
	return 0;
}