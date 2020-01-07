#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main(){
	int N, x, y, ar[50]={'\0',};
	int grade;
	vector<pair<int, int> > v;
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>x>>y;
		v.push_back(make_pair(x, y));
	}
	
	for(int j=0; j<N; j++){
		grade=1;
		for(int i=0; i<N; i++){
			if(v[j].first<v[i].first&&v[j].second<v[i].second) grade++;
		}
		ar[j]=grade;
	}
	
	for(int i=0; i<N; i++){
		cout<<ar[i]<<" ";
	}
	return 0;
}