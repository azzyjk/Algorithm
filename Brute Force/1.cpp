#include<iostream>
#include<vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int N, M, num, sum=0;
	vector<int> v;
	cin>>N>>M;
	
	for(int i=0; i<N; i++){
		cin>>num;
		v.push_back(num);
	}
	
	for(vector<int>::size_type i=0; i<v.size(); i++){
		for(vector<int>::size_type j=i+1; j<v.size(); j++){
			for(vector<int>::size_type k=j+1; k<v.size(); k++){
				if((v[i]+v[j]+v[k])<=M&&sum<(v[i]+v[j]+v[k])) sum=v[i]+v[j]+v[k];
			}
		}
	}
	cout<<sum;
	
	return 0;
}