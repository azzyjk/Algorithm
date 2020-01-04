#include<iostream>
#include<vector>
#define MAX 9

using namespace std;

int N, M;
vector<int> v;
bool check[MAX];

void Print(){
	for(vector<int>::size_type i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}

void backTK(){
	if(v.size()==M) Print();
	else {
		for(int i=1; i<=N; i++){
			if(check[i]==true) continue;
			v.push_back(i);
			check[i]=true;
			backTK();
			check[i]=false;
			v.pop_back();
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>N>>M;
	
	backTK();
	
	return 0;
}