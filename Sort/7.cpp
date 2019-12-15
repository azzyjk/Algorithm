#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

bool cmp(const pair<int, int> a, const pair<int, int> b){
	if(a.second<b.second) return true;
	else if(a.second==b.second) return a.first<b.first;
	else return false;
}

int main(){
	int N;
	cin>>N;
	
	vector<pair<int, int> > v(N);
	
	for(int i=0; i<N; i++){
		cin>>v[i].first>>v[i].second;
	}
	
	sort(v.begin(), v.end(), cmp);
	
	for(vector<int>::size_type i=0; i<v.size(); i++){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
	
	return 0;
}