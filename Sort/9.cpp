#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

bool cmp(const pair<int, string> a, const pair<int, string> b){
	if(a.first<b.first) return true;
	else return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int N, age;
	string name;
	vector<pair<int, string> > v;
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>age>>name;
		v.push_back(make_pair(age, name));
	}
	
	stable_sort(v.begin(), v.end(), cmp);
	
	for(int i=0; i<v.size(); i++){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
	return 0;
}