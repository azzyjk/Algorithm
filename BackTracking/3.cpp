#include<iostream>
#include<vector>

using namespace std;

int N, M;
vector<int> v;

void Print(){
	for(vector<int>::size_type i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}

void backTK(){
	if(v.size()==M) Print();
	else{
		for(int i=1; i<=N; i++){
			v.push_back(i);
			backTK();
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