#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<cstring>
#include<cstdio>

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

bool check(vector<pair<string,int> > v, string str){
	for(vector<int>::size_type i=0; i<v.size(); i++){
		if(v[i].first==str) return false;
	}
	return true;
}

int main(){
	int N, num;
	string str;
	vector<pair<string, int> > v;
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		cin>>str;
		if(check(v, str)) v.push_back(make_pair(str,str.length()));
	}
	
	sort(v.begin(), v.end(), cmp);
	
	for(vector<string>::size_type i=0; i<v.size(); i++){
		printf("%s\n", v[i].first.c_str());
	}
	
	return 0;
}