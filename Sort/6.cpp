#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
	int N;
	cin>>N;
	
	vector<pair<int, int> > v(N);
	
	for(int i=0; i<N; i++){
		cin>>v[i].first>>v[i].second;
	}
	
	sort(v.begin(), v.end());
	
	for(vector<int>::size_type i=0; i<v.size(); i++){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
	return 0;
}