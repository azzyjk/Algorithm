#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<cstring>

using namespace std;

bool cmp(const pair<string, int> a, const pair<string, int> b){
	int i=0;
	if(a.second<b.second) return true;
	else if(a.second==b.second){
		while(a.first[i]==b.first[i]){
			i++;
		}
		return a.first[i]<b.first[i];
	}
	else return false;
}

int main(){
	int N, num;
	string str;
	vector<pair<string, int> > v;
	
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>str;
		v.push_back(make_pair(str,str.length()));
	}
	
	sort(v.begin(), v.end(), cmp);
	
	for(vector<string>::size_type i=0; i<v.size(); i++){
		cout<<v[i].first<<" "<<v[i].second<<" "<<v[i].first[0]<<endl;
	}
	
	return 0;
}