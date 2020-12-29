#include<iostream>
#include<vector>
using namespace std;

void cal(int num, vector<int> v){
	int a, b;
	for(vector<int>::size_type i=0; i<v.size(); i++){
		b=num;
		a=v[i];
		while(b!=a){
			if(b>a) a+=v[i];
			else b+=num;
		}
		cout<<a/v[i]<<"/"<<b/num<<endl;
	}
}

int main(){
	int N, num, temp;
	vector<int> v;
	cin>>N;
	
	for(int i=0; i<N; i++){
		if(i==0) cin>>num;
		else{
			cin>>temp;
			v.push_back(temp);
		}
	}
	
	cal(num, v);	
	return 0;
}