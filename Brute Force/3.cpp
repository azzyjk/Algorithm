#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main(){
	int N, x, y, ar[50]={'\0',};
	int grade=1, Wmax=0, Hmax=0;
	vector<pair<int, int> > v;
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>x>>y;
		v.push_back(make_pair(x, y));
	}
	
	for(int j=0; j<N; j++){
		for(int i=0; i<N; i++){
			if(v[Wmax].first<v[i].first) Wmax=i;
			if(v[Hmax].second<v[i].second) Hmax=i;
		}
		v[Wmax].first=0;
		if(Wmax==Hmax){
			if(ar[Wmax]==0) ar[Wmax]=j+1;
			v[Hmax].second=0;
			grade=grade+1;
		}
		else{
			ar[Wmax]=grade;
			ar[Hmax]=grade;
			v[Wmax].second=0;
		}
	}
	
	for(int i=0; i<N; i++){
		cout<<ar[i]<<" ";
	}
	return 0;
}